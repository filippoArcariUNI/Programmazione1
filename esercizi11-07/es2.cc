// Scrivere un programma che, dato in input da linea di
// comando il nome di un file, ritorni a video il contenuto del
// suddetto file. Implementare anche dei controlli che avvisino
// l’utente in caso il numero di argomenti sia sbagliato (manca il
// file di input) oppure nel caso in cui il file di input non esista.
#include <fstream>
#include <iostream>
using namespace std;

int main(int nArg, char * arg[]){
    
    if (nArg != 2)
    {
        cout << "Attenzione, Inserire solo Il nome del file " << endl ;
    }else{
        fstream lettura;
        lettura.open(arg[1],ios::in);
        while(!lettura.eof() && !lettura.fail())
        {

            char temp[32];
            lettura.getline(temp,32); 
            cout << temp << endl;
            
        }
        lettura.close();
    }
    

}