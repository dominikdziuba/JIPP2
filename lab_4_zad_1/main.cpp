#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

struct samochod{
    string marka;
    string model;
    int rok_produkcji;
    string kolor;
};
int main()
{
    samochod sam1 ={"Subaru","Impreza",2010,"niebieski"};
    samochod sam2 ={"Vw","Golf",2013,"bialy"};
    samochod sam3 ={"Opel","Corsa",2017,"srebrny"};
    samochod sam4 ={"Audi","RS7",2020,"zielony"};

    cout << "Marka\tModel \tRok produkcji \tKolor" << endl;
    cout << "----------------------------------" << endl;


    cout<<sam1.marka<<" | "<<sam1.model<<" | "<<sam1.rok_produkcji
        <<" | "<<sam1.kolor;
    cout<<endl;
    cout<<sam2.marka<<" | "<<sam2.model<<" | "<<sam2.rok_produkcji
        <<" | "<<sam2.kolor;
    cout<<endl;
    cout<<sam3.marka<<" | "<<sam3.model<<" | "<<sam3.rok_produkcji
        <<" | "<<sam3.kolor;
    cout<<endl;
    cout<<sam4.marka<<" | "<<sam4.model<<" | "<<sam4.rok_produkcji
        <<" | "<<sam4.kolor;

    return 0;
}
