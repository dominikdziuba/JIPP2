
#include <iostream>
using namespace std;

int a, b;

int dzielenie(int a, int b) {

    if (a % b != 0)
    {
        throw "Nieprawidlowe dzielenie";
    }

    if (b == 0)
    {
        throw "Dzielnik jest zerem";
    }

    return (a/b);
}

int main () {
    cout << "Podaj liczbe a :";
    cin >> a;
    cout << "Podaj liczbe b :";
    cin >> b;
    try {

        cout << "Wynik dzielenia to : " << dzielenie(a,b);
    }
    catch (const char* msg)
    {
        cout << msg;
    }
    cout << endl;

    return 0;
}
