// Scrivere un programma che, dati in input da linea di comando
// i nomi di due file, A e B, copi il contenuto di A all’interno di B.
// Implementare anche dei controlli che avvisino l’utente in caso
// il numero di argomenti sia sbagliato (manca il file di input)
// oppure nel caso in cui il file di input non esista.

#include <fstream>
#include <iostream>
using namespace std;

int main(int nArg,char * arg[]){
    fstream lettura;
    fstream scrittura;
    if (nArg!=3)
    {
        cout << "Errore, ./a.out [nomeFIleInput] [nomeFileOutput]" << endl;
    }else{
        fstream lettura;
        fstream scrittura;
        lettura.open(arg[1],ios::in);
        scrittura.open(arg[2],ios::out);
        while (!lettura.fail() && !lettura.eof())
        {
            
            char temp[50];
            lettura.getline(temp,50);
            
            scrittura << temp<< endl;
        }
        

    }
    return 0;
}