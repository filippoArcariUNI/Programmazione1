// Scrivere un programma che implementi il Cifrario di Cesare. Il programma dovrà
// prendere in input il file contenente il messaggio da cifrare (assumete che il file
// contenga solo lettere minuscole e spazi fino ad un massimo di 255 lettere), il
// nome di un file in cui verrà salvato l’output e la chiave di cifratura. All’utente verrà
// inoltre chiesto se intende cifrare o decifrare il messaggio.
// Utilizzare le funzioni della libreria fstream
#include <fstream>
#include <iostream>
#include "cifrario.h"
using namespace std;


int main(int nArg,char * arg[]){
    if (nArg!=2)    
    {
        cout << "Attenzione! inserire il nome del file da cifrare"<< endl;
    }else{
        char s;
        int key;
        fstream lettura;
        cout<< "Cosa vuoi fare? [d]-->decripta      [c]-->cripta"<< endl;
        cin >> s;
        cout << "Inserisci la chiave: ";
        cin >> key;
        
        lettura.open(arg[1],ios::in);
        char str[256];
        int i=0;
        char c;
        while (lettura.get(c))
        {
            str[i]=c;
            i++;
        }
        str[i]='\0';
        switch (s)
        {
        case 'c':
            cout << "la stringa Originaria è:" << endl;
            cout << str<< endl;
            crypt(str,key);
            cout << "la stringa Criptata è:" << endl;
            cout << str<< endl;
            break;
        case 'd':
            cout << "la stringa Originaria è:" << endl;
            cout << str<< endl;
            deCrypt(str,key);
            cout << "la stringa decriptata è:" << endl;
            cout << str<< endl;
        
            break;
        
        default:
            cout << "Selta Errata";
            break;
        }
        lettura.close();
        
    }
    
    return 0;
}