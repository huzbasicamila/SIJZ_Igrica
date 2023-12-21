#include <iostream>
#include "Igra.h"
#include "NasumicniBroj.h"

using namespace std;
int main() {
    Igra igra;
    cin>>igra;

    NasumicniBroj broj;
    int brojKoraka= broj.dajBroj(2,20);
    cout<<"Potrebno je da napravite " << brojKoraka;

    string pravac;
    int i=0;

    while (i<brojKoraka) {
        cout<<"Unesi pravac (S, J, Z, I) ili slovo E za izlaz \n";
        cin>>pravac;


    if(pravac=="s" || pravac=="S") {
        +igra;
        i++;
    } else if (pravac=="j" || pravac=="J") {
        -igra;
        i++;
    } else if (pravac=="z" || pravac=="Z") {
        ++igra;
        i++;
    } else if (pravac=="i" || pravac=="I") {
        --igra;
        i++;
    } else if (pravac=="e" || pravac=="E") {
        break;
    } else {
        cout<< "Pogresan smijer\n";
    }
}
    cout <<"Igra je zavrsena\n";
  //cout << igra;
}