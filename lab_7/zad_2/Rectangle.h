#ifndef LAB_7___ZADANIE_2_RECTANGLE_H
#define LAB_7___ZADANIE_2_RECTANGLE_H

#include "Figura.h"

class Rectangle : public Figura
{
public:
    Rectangle(int x, int y);

    double getArea()
    {
        return a * b;
    }

private:
    int a, b;
};

#endif //LAB_7___ZADANIE_2_RECTANGLE_H
