//Scrivere un programma che per una classe con 10 alunni per ogni alunno:
//– chiede quanti voti ha,
//– li fa inserire,
//– calcola per ogni alunno la media,
//– dice quante insufficienze ha quell’alunno.
//Dopo che sono stati inseriti i voti per tutti gli alunni, il programma dice quanti voti insufficienti in tutto ci sono stati e quanti alunni hanno una media inferiore al 6.

#include <iostream>
#include <fstream>
using namespace std;

int main () {
    double media;
    double somma=0;
    int counter=0;
    int sommas=0;
    double elementi[10];
    fstream voti;
    fstream outresults;

    voti.open ("qualcosa.txt", ios::in);
    
    while(!voti.eof()) {
        voti >> elementi[counter];
        counter++;
    }

    for(int i=0; i<counter; i++) {
        somma+=elementi[i];
    }
    media=somma/counter;

    outresults.open ("qualcosa.txt", ios::out);
    
    outresults<<media<<endl;

    return 0;
}