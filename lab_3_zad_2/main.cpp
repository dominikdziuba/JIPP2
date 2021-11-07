#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

int random(int poczatek, int koniec)
{
    srand(time(NULL));
    return rand() % koniec + poczatek;
}

int main()
{
    int poczatek, koniec;

    cout << "Podaj poczatek przedzialu: ";
    cin >> poczatek;
    cout << "Podaj koniec przedzialu: ";
    cin >> koniec;

    cout << "Wylosowana liczba to: " << random(poczatek, koniec);
}
