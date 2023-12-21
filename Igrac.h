//
// Created by Amila Huzbasic on 12/21/2023.
//

#ifndef SIJZ_IGRICA_IGRAC_H
#define SIJZ_IGRICA_IGRAC_H

#include <iostream>
#include <vector>

using namespace std;

class Igrac {
private:
    char ime[50];
    int bodovi;
    unsigned int nivo;
    vector<string> pravci ;

public:
    Igrac();
    Igrac(const char* ime);
    void setIme(const char* ime);
    char* getIme();
    int getBodovi();
    unsigned int getNivo();
    vector<string>& getPravci();
    void operator++();
    Igrac& operator+(const int broj);
    Igrac& operator+(const string& pravac);
    float operator!();
    friend istream& operator>>(istream& stream, Igrac& igrac);
    friend ostream& operator<<(ostream& stream, Igrac& igrac);

    ~Igrac()=default;

};

#endif //SIJZ_IGRICA_IGRAC_H
