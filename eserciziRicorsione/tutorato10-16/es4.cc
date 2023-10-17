#include <iostream>
using namespace std;

//(voto * cfu) / totcfu 

int main(){
    double mediaInizale,numCFU;
    int voto,cfu;

    cout << "Inserisci la tua media e i tuoi CFU" << endl ;
    cin >> mediaInizale >> numCFU;
    cout << "Bene, ora inserisci il voto del nuovo esame e i sui CFU" << endl;
    cin >> voto >> cfu;
    int totVoti=mediaInizale*numCFU;
    totVoti+=voto*cfu;
    numCFU+=cfu;
    double newMedia=totVoti/numCFU;

    cout << "La tua nuova media è " << newMedia << endl;

}