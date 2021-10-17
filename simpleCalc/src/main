#include "calc.h"

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;


int main( int argc, char *argv[] )
{



    //wybór operacji
    int choice = -1;
    if(strcmp(argv[1], "add")==0)
        choice = 1;

    if(strcmp(argv[1], "substract")==0)
        choice = 2;

    if(strcmp(argv[1], "volume")==0)
        choice = 3;

    if(strcmp(argv[1], "help")==0)
        choice = 4;

    int *arguments = new int[argc];

    if(choice != -1)
        for(int i=2;i<argc;i++)
            arguments[i]=atoi(argv[i]);





    switch(choice)
    {
        case 1: //dodawanie
        {
            if(argc != 4)
                error_argc();

            cout << argv[2] << " + " << argv[3] << " = ";
            cout << add(arguments[2], arguments[3]) << endl;

            break;
        }

        case 2: //odejmowanie
        {
            if(argc != 4) //
                error_argc();

            cout << argv[2] << " - " << argv[3] << " = ";
            cout << substract(arguments[2], arguments[3]) << endl;

            break;
        }

        case 3: //obliczanie objętości
        {
            if(argc != 6)
                error_argc();


            for(int i=2;i<4;i++)
                if(arguments[i]<=0)
                    error_negative();

            cout << "Objetosc graniastoslupa prostego o podstawie trapezu (" << argv[2] << ", " << argv[3];
            cout << " - podstawy trapezu; " << argv[4] << " - wysokosc trapezu) i wysokosci H = " << argv[5] << endl;

            cout << "0.5 * (" << argv[2] << " + " << argv[3] <<") * " << argv[4] << " * " << argv[5] << " = ";
            cout << volume(arguments[2], arguments[3],arguments[4], arguments[5]) << endl;

            break;
        }

        case 4:
        {
            if(argc != 2)
                error_argc();

            help();

            break;
        }

        default: //zła nazwa operacji
        {
            error_lack_of_option();
        }

    }

    delete [] arguments;

    return 0;
}
