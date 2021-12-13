
#include "Kwadrat.h"

using namespace std;

Kwadrat::Kwadrat(int x, string name, string color)
{
    a = x;
    nazwa = name;
    kolor = color;
}

double Kwadrat::obliczPole()
{
    return a * a;
}

double Kwadrat::obliczObwod()
{
    return 4 * a;
}
