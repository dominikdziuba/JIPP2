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
    samochod opel1 ={"Subaru","Impreza",2010,"niebieski"};
    samochod opel2 ={"Vw","Golf",2013,"bialy"};
    samochod opel3 ={"Opel","Corsa",2017,"srebrny"};
    samochod opel4 ={"Audi","RS7",2020,"zielony"};

    cout << "Marka\tModel \tRok produkcji \tKolor" << endl;
    cout << "----------------------------------" << endl;

    cout<<opel1.marka<<" "<<opel1.model<<" "<<opel1.rok_produkcji
        <<" "<<opel1.kolor<<" ";
    cout<<endl;
    cout<<opel2.marka<<" "<<opel2.model<<" "<<opel2.rok_produkcji
        <<" "<<opel2.kolor<<" ";
    cout<<endl;
    cout<<opel3.marka<<" "<<opel3.model<<" "<<opel3.rok_produkcji
        <<" "<<opel3.kolor<<" ";
    cout<<endl;
    cout<<opel4.marka<<" "<<opel4.model<<" "<<opel4.rok_produkcji
        <<" "<<opel4.kolor<<" ";
    cout<<endl;

    return 0;
}
