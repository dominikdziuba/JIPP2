#include<iostream>
#include<string>

using namespace std;

struct samochod{
    string marka;
    string model;
    int rok_produkcji;
    string kolor;
    double silnik;
};
int main()
{
    samochod sam1 ={"Subaru","Impreza",2010,"niebieski",1,6};
    samochod sam2 ={"Vw","Golf",2013,"bialy",2.0};
    samochod sam3 ={"Opel","Corsa",2017,"srebrny",1.4};
    samochod sam4 ={"Audi","RS7",2020,"zielony",3.0};

    cout << "Marka\tModel \tRok produkcji \tKolor \tSilnik" << endl;
    cout << "----------------------------------" << endl;

    cout<<sam1.marka<<" | "<<sam1.model<<" | "<<sam1.rok_produkcji
        <<" | "<<sam1.kolor<<" | "<<sam1.silnik;
    cout<<endl;
    cout<<sam2.marka<<" | "<<sam2.model<<" | "<<sam2.rok_produkcji
        <<" | "<<sam2.kolor<<" | "<<sam2.silnik;
    cout<<endl;
    cout<<sam3.marka<<" | "<<sam3.model<<" | "<<sam3.rok_produkcji
        <<" | "<<sam3.kolor<<" | "<<sam3.silnik;
    cout<<endl;
    cout<<sam4.marka<<" | "<<sam4.model<<" | "<<sam4.rok_produkcji
        <<" | "<<sam4.kolor<<" | "<<sam4.silnik;
    cout<<endl;

    return 0;
}
