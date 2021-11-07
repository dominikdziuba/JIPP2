#include "matrixLib/lib.h"

void addMatrix(int** a, int** b, int r, int c) {
    int** s = 0;
    s = new int* [r];
    for (int i = 0; i < r; i++)
        s[i] = new int[c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            s[i][j] = a[i][j] + b[i][j];
            //cout << s[i][j] << " ";   SPRAWDZENIE POPRAWNOSCI
        }
        //cout << endl;
    }
    // cout << endl;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            a[i][j] = s[i][j];
        }
    }
}

void subtractMatrix(int** a, int** b, int r, int c) {
    int** s = 0;
    s = new int* [r];
    for (int i = 0; i < r; i++)
        s[i] = new int[c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            s[i][j] = a[i][j] - b[i][j];
            //   cout << s[i][j] << " ";   SPRAWDZENIE POPRAWNOSCI
        }
        // cout << endl;
    }
    // cout << endl;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            a[i][j] = s[i][j];
        }
    }
}

void multiplyMatrix(int** a, int** b, int r, int c, int c2) {
    int** s = 0;
    s = new int* [r];
    for (int i = 0; i < r; i++)
        s[i] = new int[c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c2; j++) {
            s[i][j] = 0;
            for (int k = 0; k < c; k++) {
                s[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c2; j++) {
            //     cout << s[i][j] << " ";   SPRAWDZENIE POPRAWNOSCI
        }
        // cout << endl;
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            a[i][j] = s[i][j];
        }
    }
}

void multiplyMatrixNoText(int** a, int** b, int r, int c, int c2) {
    int** s = 0;
    s = new int* [r];
    for (int i = 0; i < r; i++)
        s[i] = new int[c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c2; j++) {
            s[i][j] = 0;
            for (int k = 0; k < c; k++) {
                s[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c2; j++) {
            a[i][j] = s[i][j];
        }
    }
}

void multiplyByScalar(int** a, int r, int c, int scalar) {
    int** s = 0;
    s = new int* [r];
    for (int i = 0; i < r; i++)
        s[i] = new int[c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            s[i][j] = a[i][j] * scalar;
            //  cout << s[i][j] << " ";   SPRAWDZENIE POPRAWNOSCI
        }
        //  cout << endl;
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            a[i][j] = s[i][j];
        }
    }
}

void transpozeMatrix(int** a, int r, int c) {
    int** s = 0;
    s = new int* [r];
    for (int i = 0; i < r; i++)
        s[i] = new int[c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            s[j][i] = a[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            //  cout << s[i][j] << " ";  SPRAWDZENIE POPRAWNOSCI
        }
        //  cout << endl;
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            a[i][j] = s[i][j];
        }
    }
}

void powerMatrix(int** a, int r, int c, unsigned int power) {
    int** s = 0;
    s = new int* [r];
    for (int i = 0; i < r; i++)
        s[i] = new int[c];

    int** help = 0;
    help = new int* [r];
    for (int i = 0; i < r; i++)
        help[i] = new int[c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            help[i][j] = a[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            s[i][j] = a[i][j];
        }
    }

    for (int i = 0; i < power - 1; i++) {
        multiplyMatrixNoText(s, help, r, c, c);
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            //     cout << s[i][j] << " ";        SPRAWDZENIE POPRAWNOSCI
        }
        //   cout << endl;
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            a[i][j] = s[i][j];
        }
    }
}

int determinantMatrix(int** a, int r, int c) {
    int det = 0;
    int** s = 0;
    s = new int* [r];
    for (int i = 0; i < r; i++)
        s[i] = new int[c];


    if (r == 2)
        return ((a[0][0] * a[1][1]) - (a[1][0] * a[0][1]));
    else {
        for (int k = 0; k < r; k++) {
            int i2 = 0;
            for (int i = 1; i < r; i++) {
                int j2 = 0;
                for (int j = 0; j < r; j++) {
                    if (j == k) {
                        continue;
                    }
                    s[i2][j2] = a[i][j];
                    j2++;
                }
                i2++;
            }
            det = det + (pow(-1, k) * a[0][k] * determinantMatrix(s, r - 1, c - 1));
        }
    }
    return det;
}

bool matrixIsDiagonal(int** a, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if ((i != j) && (a[i][j] != 0)) {

                return false;

            }
        }
    }

    return true;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortRow(int* a, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(&a[j], &a[j + 1]);
}

void sortRowsInMatrix(int** a, int r, int c)
{
    for (int i = 0; i < r; i++) {
        int* array = new int[c];
        for (int j = 0; j < c; j++) {
            array[j] = a[i][j];
        }
        sortRow(array, c);
        for (int k = 0; k < c; k++) {
            a[i][k] = array[k];
        }
    }
}

void addMatrix(double** a, double** b, int r, int c) {
    double** s = 0;
    s = new double* [r];
    for (int i = 0; i < r; i++)
        s[i] = new double[c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            s[i][j] = a[i][j] + b[i][j];
            //cout << s[i][j] << " ";   SPRAWDZENIE POPRAWNOSCI
        }
        //cout << endl;
    }
    // cout << endl;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            a[i][j] = s[i][j];
        }
    }
}

void subtractMatrix(double** a, double** b, int r, int c) {
    double** s = 0;
    s = new double* [r];
    for (int i = 0; i < r; i++)
        s[i] = new double[c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            s[i][j] = a[i][j] - b[i][j];
            //   cout << s[i][j] << " ";   SPRAWDZENIE POPRAWNOSCI
        }
        // cout << endl;
    }
    // cout << endl;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            a[i][j] = s[i][j];
        }
    }
}

void multiplyMatrix(double** a, double** b, int r, int c, int c2) {
    double** s = 0;
    s = new double* [r];
    for (int i = 0; i < r; i++)
        s[i] = new double[c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c2; j++) {
            s[i][j] = 0;
            for (int k = 0; k < c; k++) {
                s[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c2; j++) {
            //     cout << s[i][j] << " ";   SPRAWDZENIE POPRAWNOSCI
        }
        // cout << endl;
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            a[i][j] = s[i][j];
        }
    }
}

void multiplyMatrixNoText(double** a, double** b, int r, int c, int c2) {
    double** s = 0;
    s = new double* [r];
    for (int i = 0; i < r; i++)
        s[i] = new double[c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c2; j++) {
            s[i][j] = 0;
            for (int k = 0; k < c; k++) {
                s[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c2; j++) {
            a[i][j] = s[i][j];
        }
    }
}

void multiplyByScalar(double** a, int r, int c, int scalar) {
    double** s = 0;
    s = new double* [r];
    for (int i = 0; i < r; i++)
        s[i] = new double[c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            s[i][j] = a[i][j] * scalar;
            //  cout << s[i][j] << " ";   SPRAWDZENIE POPRAWNOSCI
        }
        //  cout << endl;
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            a[i][j] = s[i][j];
        }
    }
}

void transpozeMatrix(double** a, int r, int c) {
    double** s = 0;
    s = new double* [r];
    for (int i = 0; i < r; i++)
        s[i] = new double[c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            s[j][i] = a[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            //  cout << s[i][j] << " ";  SPRAWDZENIE POPRAWNOSCI
        }
        //  cout << endl;
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            a[i][j] = s[i][j];
        }
    }
}

void powerMatrix(double** a, int r, int c, unsigned int power) {
    double** s = 0;
    s = new double* [r];
    for (int i = 0; i < r; i++)
        s[i] = new double[c];

    double** help = 0;
    help = new double* [r];
    for (int i = 0; i < r; i++)
        help[i] = new double[c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            help[i][j] = a[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            s[i][j] = a[i][j];
        }
    }

    for (int i = 0; i < power - 1; i++) {
        multiplyMatrixNoText(s, help, r, c, c);
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            //     cout << s[i][j] << " ";        SPRAWDZENIE POPRAWNOSCI
        }
        //   cout << endl;
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            a[i][j] = s[i][j];
        }
    }
}

double determinantMatrix(double** a, int r, int c) {
    double det = 0;
    double** s = 0;
    s = new double* [r];
    for (int i = 0; i < r; i++)
        s[i] = new double[c];


    if (r == 2)
        return ((a[0][0] * a[1][1]) - (a[1][0] * a[0][1]));
    else {
        for (int k = 0; k < r; k++) {
            int i2 = 0;
            for (int i = 1; i < r; i++) {
                int j2 = 0;
                for (int j = 0; j < r; j++) {
                    if (j == k) {
                        continue;
                    }
                    s[i2][j2] = a[i][j];
                    j2++;
                }
                i2++;
            }
            det = det + (pow(-1, k) * a[0][k] * determinantMatrix(s, r - 1, c - 1));
        }
    }
    return det;
}

bool matrixIsDiagonal(double** a, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if ((i != j) && (a[i][j] != 0)) {

                return false;

            }
        }
    }

    return true;
}

void swap(double* a, double* b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

void sortRow(double* a, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(&a[j], &a[j + 1]);
}

void sortRowsInMatrix(double** a, int r, int c)
{
    for (int i = 0; i < r; i++) {
        double* array = new double[c];
        for (int j = 0; j < c; j++) {
            array[j] = a[i][j];
        }
        sortRow(array, c);
        for (int k = 0; k < c; k++) {
            a[i][k] = array[k];
        }
    }
}

void ShowDocs(){
    cout << endl << "Matrix Lib" << endl;
    cout << endl << "Dzialania:" << endl;
    cout << "\t[addMatrix]" << endl << "\t\t[macierz a] [macierz b] [ilosc wierszy] [ilosc kolumn]\n\t\tDodawanie dwoch podanych przez nas macierzy." << endl;
    cout << "\t[subtractMatrix]" << endl << "\t\t[macierz a] [macierz b] [ilosc wierszy] [ilosc kolumn]\n\t\tOdejmowanie dwoch podanych przez nas macierzy." << endl;
    cout << "\t[multiplyMatrix]" << endl << "\t\t[macierz a] [macierz b] [ilosc wierszy a] [ilosc kolumn a] [ilosc kolumn b]\n\t\tMnozenie dwoch podanych przez nas macierzy." << endl;
    cout << "\t[multiplyByScalar]" << endl << "\t\t[macierz a] [ilosc wierszy] [ilosc kolumn] [skalar]\n\t\tMnozenie jednej macierzy przez skalar." << endl;
    cout << "\t[transpozeMatrix]" << endl << "\t\t[macierz a] [ilosc wierszy] [ilosc kolumn]\n\t\tTransponowanie macierzy." << endl;
    cout << "\t[powerMatrix]" << endl << "\t\t[macierz a] [ilosc wierszy] [ilosc kolumn] [stopien potegi]\n\t\tPotegowanie macierzy." << endl;
    cout << "\t[determinantMatrix]" << endl << "\t\t[macierz a] [ilosc wierszy] [ilosc kolumn]\n\t\tWyznacznik macierzy." << endl;
    cout << "\t[matrixIsDiagonal]" << endl << "\t\t[macierz a] [ilosc wierszy] [ilosc kolumn]\n\t\tSprawdzenie czy macierz jest diagonalna." << endl;
    cout << "\t[sortRowsInMatrix]" << endl << "\t\t[macierz a] [ilosc wierszy] [ilosc kolumn]\n\t\tSortowanie wszystkich wierszy macierzy." << endl;

}
