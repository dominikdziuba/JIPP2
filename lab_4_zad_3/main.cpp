#include<iostream>
#include<string>
using namespace std;

struct samochod{
    string marka;
    string model;
    int rok_produkcji;
    string kolor;
};

int licz(samochod osobowy[] ,int liczba_samochodow, string marka){

    int licznik = 0;
    for(int i = 0; i < liczba_samochodow; i++){
            if(osobowy[i].marka == marka){
                licznik++;
            }
    }
    return licznik;
}

int main(){

    string m;
    int liczba_samochodow = 6;
    int wynik;
    samochod osobowy[] = {{"BMW", "M2", 2014, "czarny"},
                          {"Audi", "A4", 2015, "czerwony"},
                          {"BMW", "M3", 2013, "srebrny"},
                          {"Audi", "A6", 2018, "bialy"},
                          {"BMW", "M4", 2012, "zielony"},
                          {"Fiat", "Panda", 2011, "niebieski"}};

    cout << "Marka\tModel \tRok produkcji \tKolor" << endl;
    cout << "----------------------------------" << endl;

    for (int i = 0; i < liczba_samochodow; i++)
    {
        cout << osobowy[i].marka << "\t" << osobowy[i].model << "\t" << osobowy[i].rok_produkcji << "\t" << osobowy[i].kolor << endl;
    }
    cout<<endl;
    cout<<"Podaj marke: "<<endl;
    cin>>m;
    wynik = licz(osobowy, liczba_samochodow, m);
    cout<<"Liczba samochodow marki "<<m<<": "<<wynik<<endl;
    return 0;
}
