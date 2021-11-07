
#include <iostream>

using namespace std;

int main() {
    int x{10},y{25};
    int *wsk_do_x{&x};
    int *wsk_do_y{&y};

    double srednia_arytmetyczna{((x+y)*1.0)/2};

    cout<<"Srednia arytmetyczna z "<<x<<", "<<y<<" = "<<srednia_arytmetyczna<<endl;
    return 0;
}
