#ifndef LAB_7___ZADANIE_2_CIRCLE_H
#define LAB_7___ZADANIE_2_CIRCLE_H

#include "Figura.h"

class Circle : public Figura
{
public:
    Circle(int r);
    double getArea()
    {
        return promien*promien*3.14;
    }
private:
    int promien;
};

#endif //LAB_7___ZADANIE_2_CIRCLE_H
