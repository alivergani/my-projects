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
    int insufftot=0;
    int mediain=0;

    for (int i=0; i<10; i++) {
        double somma =0;
        int insuff=0;
        cout << "Quanti voti hai? ";
        cin >> N;
        
        for (int j=0; j<N; j++){
            cout << "Inserisci i voti"<< endl;
            cin >> i;
            somma+=i;
            if (i<6) {
                insuff+=1;
                insufftot+=1;
            }
        }
        cout << somma/N << " è la media dell'alunno " << endl;
        
        if ((somma/N)<6) {
            mediain+=1;
        }

        cout << "L'alunno ha " << insuff << " insufficienze" << endl;
        
    }

    cout << "Ci sono in tutto " << insufftot << " insufficienze nella classe" << endl;
    cout << "ci sono " << mediain << " alunni con la media insufficiente" << endl;

    if (mediain==10) {
        cout << "CAPRE"<< endl;
    } if (mediain <=5) {
        cout << "Nice job" << endl;
    } else {
        cout << "Mediocri falliti" << endl;
    }
    
    return 0;
}