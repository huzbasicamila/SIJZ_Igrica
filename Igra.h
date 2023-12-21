//
// Created by Amila Huzbasic on 12/21/2023.
//

#ifndef SIJZ_IGRICA_IGRA_H
#define SIJZ_IGRICA_IGRA_H

#include <iostream>
#include "Igrac.h"

class Igra {
private:
    Igrac igrac;
    int dajBrojBodova();

public:
    Igra();
    Igra(Igrac igrac);
    void setIgrac(Igrac igrac);
    Igrac getIgrac();

    void operator+(); //ide sjever
    void operator-(); //ide jug
    void operator++(); //ide zapad
    void operator--(); //ide istok

    friend istream& operator>>(istream& stream, Igra& igra);
    friend ostream& operator<<(ostream stream, Igra& igra);

    ~Igra()=default;
};
#endif //SIJZ_IGRICA_IGRA_H
