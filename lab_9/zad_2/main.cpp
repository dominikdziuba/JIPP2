#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
    list<string> imie= {"ala", "julka","piotrek"};
    list<string>::iterator x;


    for (x = imie.begin(); x != imie.end(); x++) {

        cout << (*x) << " "; //używanie iteratora wejściowego do przechodzenia przez listę
    }
    cout<<endl;

    for (x = imie.begin(); x != imie.end(); x++)
    {
        for(auto &znak:(*x))
        {
            znak-=32;
        }
    }
    cout<<endl;

    for (x = imie.begin(); x != imie.end(); x++) {

        cout << (*x) << " "; //używanie iteratora wejściowego do przechodzenia przez listę
    }
    cout<<endl;
}
