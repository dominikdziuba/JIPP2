#include "Prostokat.h"

using namespace std;

Prostokat::Prostokat(int x, int y, string name, string color)
{
    a = x;
    b = y;
    nazwa = name;
    kolor = color;
}

double Prostokat::obliczPole()
{
    return a * b;
}

double Prostokat::obliczObwod()
{
    return 2 * (a + b);
}
