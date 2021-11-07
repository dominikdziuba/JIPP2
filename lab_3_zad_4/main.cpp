#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int rozmiar,pom;

void uzupelnianie(int *tablica1)
{
    for(int i =0; i<rozmiar; i++)
    {
        tablica1[i] = (rand()%100) + 1;

        cout << tablica1[i] << " ";

    }
}


int main()
{
    srand(time(NULL));
    cout << "Podaj rozmiar tablicy :"<<endl;
    cin >> rozmiar;

    int* tablica1 = new int [rozmiar];


        cout << "Tablica przed zamiana wyglada nastepujaco :"<< endl;
        uzupelnianie(tablica1);
        cout<< endl;
        cout << "Tablica po zamianie wyglada nastepujaco :"<< endl;
        reverse(tablica1,tablica1+rozmiar);
    for(int i =0; i<rozmiar; i++)
    {
        cout << tablica1[i] << " ";

    }


    delete[] tablica1;

    return 0;
}
