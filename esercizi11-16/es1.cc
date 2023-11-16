// Scrivere un programma che definisca una struttura chiamata
// Studente formata dai campi nome (array di 30 caratteri),
// cognome (array di 30 caratteri), matricola (int) e media (float)
// ponderata dei voti. Implementare poi le funzioni definite in basso: la
// funzione stampa_studente stampa a video il contenuto di una
// struttura Studente, mentre la funzione genera_studente genera una
// struttura Studente dati in input il valore dei suoi campi.
// Si può utilizzare la funzione strcpy della libreria cstring.
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
struct studente{
    char nome[31];
    char cognome[31];
    int  matricola;
    float media;
};

void stampa_studente(studente * );
studente * genera_studente(char[],char[],int,float);

int main(){
    char nome[31];
    char cognome[31];
    int matricola;
    float media;
    cout << "Inserisci il Nome" << endl;
    cin >> nome;
    cout << "Inserisci il Cognome" << endl;
    cin >> cognome;
    cout << "Inserisci il Matricola" << endl;
    cin >> matricola;
    cout << "Inserisci il Media" << endl;
    cin >> media;

    studente * s = genera_studente(nome,cognome,matricola,media);
    stampa_studente(s);
    

}

studente * genera_studente(char nome[],char cognome[],int matricola, float media){

    studente * s =new studente();
    strcpy(s->nome,nome);
    strcpy(s->cognome,cognome);
    s->matricola=matricola;
    s->media=media;
    return s;
}

void stampa_studente(studente * s){
    cout << "Nome [" << s->nome << "]\n";
    cout << "cognome [" << s->cognome << "]\n";
    cout << "matricola [" << s->matricola << "]\n";
    cout << "media [" << s->media << "]\n";

    
}