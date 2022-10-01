//Scrivere un programma che per una classe con 10 alunni per ogni alunno:
//– chiede quanti voti ha,
//– li fa inserire,
//– calcola per ogni alunno la media,
//– dice quante insufficienze ha quell’alunno.
//Dopo che sono stati inseriti i voti per tutti gli alunni, il programma dice quanti voti insufficienti in tutto ci sono stati e quanti alunni hanno una media inferiore al 6.

#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int N;
    double grades[N];
    double somma=0;
    double media;
    int insufficienze=0;

    for (int i=0;i<10; i++) {
        cout << "Quanti voti devi inserire? ";
        cin >> N;
        cout << "Inserisci i voti: "<< endl;
        for (int j=0; j< N; j++) {
            cin >> grades[j];
        }

        for (int j=0; j< N; j++) 
            somma+= grades[j];
        
        media=somma/10;
        cout << media << endl;

        for (int j=0; j< N; j++) {
            if(grades[j] < 6) {
                insufficienze +=grades[j];
            }
            cout << insufficienze << "= sono le insufficienze dell'alunno " << i << endl;
        }   
    }
    
    //cout << "La media dell'alunno " << (i+1) << " è: "<< media << endl;
    
    return 0;
}