#include <iostream>
#include "matrixLib/lib.h"

using namespace std;

void ShowDocsMatrixApp(){
    cout << endl << "Matrix App" << endl;
    cout << endl << "Wczytywanie macierzy: " << endl;
    cout << "\tMacierze wczytujemy po podaniu jednego z dzialan jako parametru startowego programu, ponize lista dzialan" << endl;
    cout  << "\tProces wczytywania: " << endl;
    cout << "\t\t1.Podajemy na jakich typach liczb chcemy operowac" << endl;
    cout << "\t\t2.Podajemy wielkosci jednej lub dwoch macierzy potrzebnych do wykonania dzialania" << endl;
    cout << "\t\t3.Podajemy wartosci jednej lub dwoch macierzy potrzebnych do wykonania dzialania" << endl;
}

int main(int argc, char* argv[]) {

    for (int i = 0; i < argc; ++i) {
        //Przypadkowy push tu byl
        string operation = argv[i];
        int type = 0;
        if (operation == "help") {
            ShowDocsMatrixApp();
            ShowDocs();
            return 0;
        }
        else if ((operation == "addMatrix") || (operation == "subtractMatrix") || (operation == "multiplyMatrix")) {
            cout << "Wybrana nazwa funkcji: " << operation << endl << endl;
            cout << "Na jakich typach liczb chcesz dzialac? (Podaj Liczbe 1 lub 2)\n1.Double\n2.Int" << endl;
            cin >> type; if (cin.fail()) { cout << "\nMusisz podac int!!!\n"; cin.clear(); return 0; }
            if (type == 1) {
                int rows1, columns1, rows2, columns2;
                cout << "Podaj liczbę wierszy i kolumn pierwszej macierzy: " << endl;
                cin >> rows1 >> columns1; if (cin.fail()) { cout << "\nMusisz podac int!!!\n"; cin.clear(); return 0; }
                cout << "Podaj liczbę wierszy i kolumn drugiej macierzy: " << endl;
                cin >> rows2 >> columns2; if (cin.fail()) { cout << "\nMusisz podac int!!!\n"; cin.clear(); return 0; }
                double** a = 0;
                double** b = 0;
                a = new double* [rows1];
                b = new double* [rows2];

                for (int i = 0; i < rows1; i++)
                    a[i] = new double[columns1];
                for (int i = 0; i < rows2; i++)
                    b[i] = new double[columns2];

                for (int i = 0; i < rows1; i++) {
                    for (int j = 0; j < columns1; j++) {
                        cout << "Podaj element pierwszej macierzy [" << i + 1 << "] [" << j + 1 << "]:";
                        cin >> a[i][j]; if (cin.fail()) { cout << "\nMusisz podac double!!!\n"; cin.clear(); return 0; }
                    }
                }

                cout << endl;

                for (int i = 0; i < rows2; i++) {
                    for (int j = 0; j < columns2; j++) {
                        cout << "Podaj element drugiej macierzy [" << i + 1 << "] [" << j + 1 << "]:";
                        cin >> b[i][j]; if (cin.fail()) { cout << "\nMusisz podac double!!!\n"; cin.clear(); return 0; }
                    }
                }
                if (operation == "addMatrix") {
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                    cout << "+" << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << b[i][j] << " ";
                        }
                        cout << endl;
                    }
                    addMatrix(a, b, rows1, columns1);
                    cout << "=" << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                }
                else if (operation == "subtractMatrix") {
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                    cout << "-" << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << b[i][j] << " ";
                        }
                        cout << endl;
                    }
                    subtractMatrix(a, b, rows1, columns1);
                    cout << "=" << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }

                }
                else if (operation == "multiplyMatrix") {
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                    cout << "*" << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << b[i][j] << " ";
                        }
                        cout << endl;
                    }
                    multiplyMatrix(a, b, rows1, columns1, columns2);
                    cout << "=" << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }

                }
            }
            else if (type == 2) {
                int rows1, columns1, rows2, columns2;
                cout << "Podaj liczbę wierszy i kolumn pierwszej macierzy: " << endl;
                cin >> rows1 >> columns1; if (cin.fail()) { cout << "\nMusisz podac int!!!\n"; cin.clear(); return 0; }
                cout << "Podaj liczbę wierszy i kolumn drugiej macierzy: " << endl;
                cin >> rows2 >> columns2; if (cin.fail()) { cout << "\nMusisz podac int!!!\n"; cin.clear(); return 0; }
                int** a = 0;
                int** b = 0;
                a = new int* [rows1];
                b = new int* [rows2];

                for (int i = 0; i < rows1; i++)
                    a[i] = new int[columns1];
                for (int i = 0; i < rows2; i++)
                    b[i] = new int[columns2];

                for (int i = 0; i < rows1; i++) {
                    for (int j = 0; j < columns1; j++) {
                        cout << "Podaj element pierwszej macierzy [" << i + 1 << "] [" << j + 1 << "]:";
                        cin >> a[i][j];
                    }
                }

                cout << endl;

                for (int i = 0; i < rows2; i++) {
                    for (int j = 0; j < columns2; j++) {
                        cout << "Podaj element drugiej macierzy [" << i + 1 << "] [" << j + 1 << "]:";
                        cin >> b[i][j];
                    }
                }
                if (operation == "addMatrix") {
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                    cout << "+" << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << b[i][j] << " ";
                        }
                        cout << endl;
                    }
                    addMatrix(a, b, rows1, columns1);
                    cout << "=" << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                }
                else if (operation == "subtractMatrix") {
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                    cout << "-" << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << b[i][j] << " ";
                        }
                        cout << endl;
                    }
                    subtractMatrix(a, b, rows1, columns1);
                    cout << "=" << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }

                }
                else if (operation == "multiplyMatrix") {
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                    cout << "*" << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << b[i][j] << " ";
                        }
                        cout << endl;
                    }
                    multiplyMatrix(a, b, rows1, columns1, columns2);
                    cout << "=" << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }

                }

            }

        }
        else if ((operation == "multiplyByScalar") || (operation == "transpozeMatrix") || (operation == "powerMatrix") || (operation == "determinantMatrix") || (operation == "matrixIsDiagonal") || (operation == "sortRowsInMatrix")) {
            cout << "Wybrana nazwa funkcji: " << operation << endl << endl;

            cout << "Na jakich typach liczb chcesz dzialac? (Podaj Liczbe 1 lub 2)\n1.Double\n2.Int" << endl;
            cin >> type; if (cin.fail()) { cout << "\nMusisz podac int!!!\n"; cin.clear(); return 0; }
            if (type == 1) {
                int rows1, columns1, rows2, columns2;
                cout << "Podaj liczbę wierszy i kolumn pierwszej macierzy: " << endl;
                cin >> rows1 >> columns1; if (cin.fail()) { cout << "\nMusisz podac int!!!\n"; cin.clear(); return 0; }
                double** a = 0;
                a = new double* [rows1];

                for (int i = 0; i < rows1; i++)
                    a[i] = new double[columns1];

                for (int i = 0; i < rows1; i++) {
                    for (int j = 0; j < columns1; j++) {
                        cout << "Podaj element pierwszej macierzy [" << i + 1 << "] [" << j + 1 << "]:";
                        cin >> a[i][j]; if (cin.fail()) { cout << "\nMusisz podac double!!!\n"; cin.clear(); return 0; }
                    }
                }
                if (operation == "multiplyByScalar") {
                    cout << endl;
                    int scalar;
                    cout << "Podaj skalar: " << endl;
                    cin >> scalar;
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                    cout << "*" << endl;
                    cout << scalar << endl;
                    multiplyByScalar(a, rows1, columns1, scalar);
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                }
                else if (operation == "transpozeMatrix") {
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                    transpozeMatrix(a, rows1, columns1);
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                }
                else if (operation == "powerMatrix") {
                    cout << endl;
                    int power;
                    cout << "Podaj potege: " << endl;
                    cin >> power;
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                    powerMatrix(a, rows1, columns1, power);
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                }
                else if (operation == "determinantMatrix") {
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                    determinantMatrix(a, rows1, columns1);
                    cout << "Wyznacznik macierzy a jest równy: " << determinantMatrix(a, rows1, columns1) << endl;
                }
                else if (operation == "matrixIsDiagonal") {
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                    if (matrixIsDiagonal(a, rows1, columns1) == true) {
                        cout << "Jest diagonalna" << endl;
                    }
                    else {
                        cout << "Nie jest diagonalna" << endl;
                    }
                }
                else if (operation == "sortRowsInMatrix") {
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                    sortRowsInMatrix(a, rows1, columns1);
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                }
            }
            else if (type == 2) {
                int rows1, columns1, rows2, columns2;
                cout << "Podaj liczbę wierszy i kolumn pierwszej macierzy: " << endl;
                cin >> rows1 >> columns1; if (cin.fail()) { cout << "\nMusisz podac int!!!\n"; cin.clear(); return 0; }
                int** a = 0;
                a = new int* [rows1];

                for (int i = 0; i < rows1; i++)
                    a[i] = new int[columns1];

                for (int i = 0; i < rows1; i++) {
                    for (int j = 0; j < columns1; j++) {
                        cout << "Podaj element pierwszej macierzy [" << i + 1 << "] [" << j + 1 << "]:";
                        cin >> a[i][j]; if (cin.fail()) { cout << "\nMusisz podac int!!!\n"; cin.clear(); return 0; }
                    }
                }
                if (operation == "multiplyByScalar") {
                    cout << endl;
                    int scalar;
                    cout << "Podaj skalar: " << endl;
                    cin >> scalar;
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                    cout << "*" << endl;
                    cout << scalar << endl;
                    multiplyByScalar(a, rows1, columns1, scalar);
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                }
                else if (operation == "transpozeMatrix") {
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                    transpozeMatrix(a, rows1, columns1);
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                }
                else if (operation == "powerMatrix") {
                    cout << endl;
                    int power;
                    cout << "Podaj potege: " << endl;
                    cin >> power;
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                    powerMatrix(a, rows1, columns1,power);
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                }
                else if (operation == "determinantMatrix") {
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                    determinantMatrix(a, rows1, columns1);
                    cout << "Wyznacznik macierzy a jest równy: " << determinantMatrix(a, rows1, columns1) << endl;
                }
                else if (operation == "matrixIsDiagonal") {
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                    if (matrixIsDiagonal(a, rows1, columns1) == true) {
                        cout << "Jest diagonalna" << endl;
                    }
                    else {
                        cout << "Nie jest diagonalna" << endl;
                    }
                }
                else if (operation == "sortRowsInMatrix") {
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                    sortRowsInMatrix(a, rows1, columns1);
                    cout << endl;
                    for (int i = 0; i < rows1; i++) {
                        for (int j = 0; j < columns1; j++) {
                            cout << a[i][j] << " ";
                        }
                        cout << endl;
                    }
                }

            }

        }
        else {
            ShowDocsMatrixApp();
            ShowDocs();
            return 0;
        }
    }

    return 0;
}
