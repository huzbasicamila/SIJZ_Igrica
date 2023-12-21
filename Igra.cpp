//
// Created by Amila Huzbasic on 12/21/2023.
//

#include "Igra.h"
#include "NasumicniBroj.h"

Igra::Igra() {
    Igrac igrac;
    this->setIgrac(igrac);
}

Igra::Igra(Igrac igrac) {
    this->setIgrac(igrac);
}

void Igra::setIgrac(Igrac igrac) {
    this->igrac=igrac;
}

Igrac Igra::getIgrac() {
    return this->igrac;
}

//idi sjever

void Igra::operator+() {
    this->igrac = this->igrac + this->dajBrojBodova();//povecaj broj bodova
    this->igrac=this->igrac + "Sjever"; //unesi pravac
}

// Idi jug
void Igra::operator-() {
    this->igrac = this->igrac + this->dajBrojBodova(); // Povećaj broj bodova
    this->igrac = this->igrac + " Jug"; // Unesi pravac
}

// Idi zapad
void Igra::operator++() {
    this->igrac = this->igrac + this->dajBrojBodova(); // Povećaj broj bodova
    this->igrac = this->igrac + " Zapad"; // Unesi pravac
}

// Idi istok
void Igra::operator--() {
    this->igrac = this->igrac + this->dajBrojBodova(); // Povećaj broj bodova
    this->igrac = this->igrac + " Istok"; // Unesi pravac
}

int Igra::dajBrojBodova() {
    NasumicniBroj broj;
    return broj.dajBroj(-5, 15);
}

istream& operator>>(istream& stream, Igra& igra) {
    Igrac igrac;
    cin>>igrac;

    igra.setIgrac(igrac);

    return stream;
}

ostream& operator<<(ostream& stream, Igra& igra) {
    Igrac igrac= igra.getIgrac();
    stream<< "Igra: ";
    stream << igrac;

    return stream;
}