#include <iostream>
#include "Kwadrat.h"
#include "Prostokat.h"

using namespace std;

int main()
{
    Prostokat p1(2,4,"Jan","Niebieski");
    Kwadrat k1(2,"Mariusz","Czerwony");
    cout<<"Pole k1="<<k1.obliczPole();
    cout<<"\nObw p1="<<p1.obliczObwod();
}
