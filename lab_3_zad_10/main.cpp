#include <iostream>
#include <string>

using namespace std;

double dzielenie(int a, int b);

struct Tblad_wynik_jest_ulamkiem {
};

int main() {
    try {
        string linia;
        cout<<"Podaj liczbe:";
        cin>>linia;
        int liczba{stoi(linia)};
        cout<<"Liczba = "<<liczba<<endl;
    }
    catch (std::invalid_argument &e) {
        cout << "Blad funkcji " << e.what() << ": Niepoprawny argument\n";
    }
    catch (std::out_of_range &e) {
        cout << "Blad funkcji " << e.what() << ": wartosc poza zakresem pracy\n";
    }
}

double dzielenie(int a, int b) {
    cout << "Dzielimy b przez a\n";
    if (b * 1.0 / a == b / a) {
        return b * 1.0 / a;
    } else {
        Tblad_wynik_jest_ulamkiem ulamek;
        throw ulamek;
    }
}
