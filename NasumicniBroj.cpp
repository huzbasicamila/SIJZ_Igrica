
#include <cstdlib>
#include <iostream>

#include "NasumicniBroj.h"

NasumicniBroj::NasumicniBroj() {
    srand((unsigned)time(NULL));
}

int NasumicniBroj::dajBroj() {
    return rand();
}

int NasumicniBroj::dajBroj(int max) {
    return rand()%max;
}

int NasumicniBroj::dajBroj(int min, int max) {
    return min+(rand()%max);
}