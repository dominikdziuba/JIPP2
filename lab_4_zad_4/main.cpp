
#include<iostream>
#include<string>
using namespace std;

struct samochod{
    string marka;
    string model;
    int rok_produkcji;
    string kolor;
};

int min(samochod osobowy[] ,int liczba_samochodow){

    int min = osobowy[0].rok_produkcji;
    for(int i = 0; i < liczba_samochodow; i++){
        if(osobowy[i].rok_produkcji < min){
            min = osobowy[i].rok_produkcji;
        }
    }

    return min;
}

int main(){

    string m;
    int liczba_samochodow = 6;
    int wynik;
    samochod osobowy[] = {{"BMW", "M2", 2018, "czarny"},
                          {"Audi", "A4", 2014, "czerwony"},
                          {"BMW", "M3", 2017, "srebrny"},
                          {"Audi", "A6", 2013, "bialy"},
                          {"BMW", "M4", 2021, "zielony"},
                          {"Fiat", "Panda", 2005, "niebieski"}};

    cout << "Marka\tModel \tRok produkcji \tKolor" << endl;
    cout << "----------------------------------" << endl;

    for (int i = 0; i < liczba_samochodow; i++)
    {
        cout << osobowy[i].marka << "\t" << osobowy[i].model << "\t" << osobowy[i].rok_produkcji << "\t" << osobowy[i].kolor << endl;
    }
    cout<<endl;
    wynik = min(osobowy, liczba_samochodow);
    cout<<"Najnizszy rok produkcji ma: "<<endl;

    for (int i = 0; i < liczba_samochodow; i++) {
        if (wynik == osobowy[i].rok_produkcji) {
            cout<< "Indeks: "<<i<<endl;
            cout << osobowy[i].marka << "\t" << osobowy[i].model << "\t" << osobowy[i].rok_produkcji << "\t"
                 << osobowy[i].kolor << endl;
        }
    }
    return 0;
}
