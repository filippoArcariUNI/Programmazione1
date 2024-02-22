#include <iostream>
#include <string.h> // definisce la funzione "int strlen (const char * array);"
#include <math.h>   // definisce la funzione "int pow (base, esponente);"
#include "pila.h"  // fare riferimento al file "pila.h" per le funzioni esposte

using namespace std;

int decodificaNumero(char numeroCodificato []);

int main() { 
    int dimensioneMassima = 9;
    char numeroCodificato [dimensioneMassima];
    cout << "Inserisci l'array: ";
    cin >> numeroCodificato;
    int decodifica = decodificaNumero(numeroCodificato);
    cout << "Decodifica: " << decodifica << endl;
}

int decodificaNumero(char numeroCodificato []) {
    // Scrivere il codice qui
    int numero = 0;
    int lenCodifica = strlen(numeroCodificato);
    int esponente = lenCodifica;
    init();
    for (int i = 0; i <= lenCodifica; i++) {
        push(i+1);
        if (i == lenCodifica || numeroCodificato[i]=='I')
        {
            while (!vuota())
            {
                int temp;
                top(temp);
                numero+=temp*pow(10,esponente);
                esponente--;
                pop();
                
            }
            
        }
        
        // se il carattere corrente rappresenta un maggiore
        // oppure ho raggiunto l’ultimo carattere
        // calcolo la cifra corrente svuotando lo stack,
        // aggiornando le variabili esponente e numero
        
    }
    return numero;
    // Potete assumere che l'array rispetti le assunzioni
    // dell'esercizio (non serve fare controlli sull'input)
}