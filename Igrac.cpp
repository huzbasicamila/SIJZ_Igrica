//
// Created by Amila Huzbasic on 12/21/2023.
//
#include "Igrac.h"
#include <iostream>
#include <iomanip>
#include <string.h>

Igrac::Igrac() {
    char ime[50];
    strcpy(ime, "Igrac");
    this->setIme(ime);
    this->bodovi=0;
    this->nivo=0;
}

Igrac::Igrac(const char *ime) {
    this->setIme(ime);
    this->bodovi=0;
    this->nivo=0;
}

void Igrac::setIme(const char *ime) {
    strcpy(this->ime, ime);
}

char* Igrac::getIme() {
    return this->ime;
}
int Igrac::getBodovi() {
    return this->bodovi;
}
unsigned int Igrac::getNivo() {
    return this->nivo;
}
vector<string>& Igrac::getPravci() {
    return this->pravci;
}

//povecaj nivo za 1
void Igrac::operator++(){
    int nivo=static_cast<int>(this->getNivo());
    if(nivo<20)
    {
        nivo++;
        this->nivo=nivo;
    }
    else {
        std::cout<<"Igrica je zavrsena!\n";
    }

}

//povecaj bodove za neki broj
Igrac& Igrac::operator+(int broj) {
    this->bodovi +=broj;
    return *this;
}

//povecaj korake za jedan

Igrac& Igrac::operator+(const std::string &pravac) {
    this->pravci.push_back(pravac);
    return *this;
}

//izracunaj prosjek bodova

float Igrac::operator!() {
    if(this->getPravci().size()==0) {
        return 0;
    }
    return (float) this->getBodovi() / (float)this->getPravci().size();

}

istream& operator>>(istream& stream, Igrac& igrac) {
    std::cout<<"Unesite igraca: \n";
    std::cout<<"Ime: ";
    char ime[50];
    cin.getline(ime, 50);

    igrac.setIme(ime);
    return stream;
}

ostream& operator<<(ostream& stream, Igrac& igrac) {
    system("cls");
    stream<<"Igrac: " << igrac.getIme() << std::endl;
    stream<< "Broj bodova: " << igrac.getBodovi() << std::endl;
    stream << "Prosjek bodova: " << !igrac << setprecision(1) << std::endl;

    if(igrac.getPravci().size()==0) {
        stream<< "Nije bilo kretanja";
    } else {
        stream << "Pravci kretanja: " << std::endl;
        for (int i=0; i<igrac.getPravci().size(); i++) {
            stream << igrac.getPravci()[i] << " - ";
        }
    }
    return stream;
}