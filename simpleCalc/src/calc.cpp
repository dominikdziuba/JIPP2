#include <iostream>
#include <stdlib.h>

#include "calc.h"

using namespace std;

int add(int a, int b) //dodawanie
{
    return a+b;
}

int substract(int a, int b) //odejmowanie
{
    return a-b;
}

double volume(int a, int b, int h, int H) //objętość
{
    return 0.5*(a+b)*h*H;
}

void help() //dokumentacja
{
    cout << "\nSimple calculator" << endl;
    cout << "simpleCalc [nazwa dzialania]" << endl;

    cout << "\nDzialania:" << endl;
    cout << "add [a] [b] " << endl;
    cout << "\tDodawanie dwoch liczb ([a] i [b]) calkowitych." << endl;

    cout << "substract [a] [b]" << endl;
    cout << "\tOdejmowanie dwoch liczb ([a] i [b]) calkowitych." << endl;

    cout << "volume [a] [b] [h] [H]" << endl;
    cout << "\tObliczanie objetosci graniastoslupa prostego o podstawie trapezu, gdzie:" << endl;
    cout << "\t\t[a] [b] - podstawy trapezu (a,b > 0)" << endl;
    cout << "\t\t[h] - wysokosc podstawy (h > 0)" << endl;
    cout << "\t\t[H] - wysokosc graniastoslupa (H > 0)" << endl;

    cout << "help" << endl;
    cout << "\tWyswietlanie dokumentacji." << endl;
}

void error_argc() //zła liczba parametrów
{
    cout << "\nBlad. Podano niepoprawna liczbe argumentow." << endl;
    help();
    exit(-1);
}

void error_negative() //złe wartości parametrów
{
    cout << "\nBlad. Graniastoslup nie moze miec krawedzi o niedodatnich wartosciach." << endl;
    help();\
    exit(-1);
}

void error_lack_of_option() //zła nazwa operacji
{
    cout <<"\nBlad. Podano niepoprawna nazwe operacji do wykonania."
           "Kalkulator nie jest w stanie wykonac obliczen." << endl;
    help();
    exit(-1);
}
