ifndef LAB_7___ZADANIE_1_KWADRAT_H
#define LAB_7___ZADANIE_1_KWADRAT_H

#include "Figura.h"
#include <string>

class Kwadrat : public Figura
{
public:
    Kwadrat(int x, std::string name,std::string color);

    double obliczPole();

    double obliczObwod();

private:
    double a;
};

#endif //LAB_7___ZADANIE_1_KWADRAT_H
