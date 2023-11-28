#include <iostream>
#include <fstream>
#include "coda.h"
using namespace std;

int main(){
    char c;
    init();
    do
    {
         cout << "Seleziona un opzione \n";
    cout << "aggiungi persona --> a  \n";
    cout << "smaltisci persona --> r\n";
    cout << "stampa situazione corrente --> p\n";
    cout << "Esci --> q\t";
    cout << endl;
    cin >> c;
    
    switch (c)
    {
    case 'a':
        char nome[20];
        cout << "Inserisci il Nome"<< endl;
        cin >> nome;
        enqueue(nome);
        break;
    case 'r':
        
        char * nomeElim;
        if (first(nomeElim) && dequeue())
        {
           cout << "Eliminato " << nomeElim << endl; 
        }else{
            cout << "Errore nell' Eliminazione" << endl;
        }
        break;
    case 'p':
            print();
        break;
    case 'q':
            exit(0);
        break;
    
    default:
        cout << "scelta Errata" << endl;
        exit(1);
        break;
    }
    cout << endl;
    } while (c!='q');
    
   deinit();
    return 0;
}