#ifndef LAB_7___ZADANIE_1_PROSTOKAT_H
#define LAB_7___ZADANIE_1_PROSTOKAT_H

#include "Figura.h"
#include <string>

class Prostokat : public Figura
{
public:
    Prostokat(int x, int y, std::string name, std::string color);

    double obliczPole();

    double obliczObwod();

private:
    double a, b;
};

#endif //LAB_7___ZADANIE_1_PROSTOKAT_H
