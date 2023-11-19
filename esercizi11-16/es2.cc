// Utilizzando le funzioni scritte precedentemente, scrivere un programma
// che, dato in input un file contenente i dati di alcuni studenti e il numero di
// righe del file, generi un array dinamico che contenga tutti questi studenti. E’
// consigliato raggruppare questa logica all’interno di una funzione separata.
// Utilizzare la libreria fstream.
#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip> 
using namespace std;
struct studente{
    char nome[31];
    char cognome[31];
    int  matricola;
    float media;
};

void stampa_studente(studente * );
studente * genera_studente(char[],char[],int,float);

int main(int nArg,char * arg[]){
    
    if (nArg!=2)
    {
        cout << "Attenzione, Inserire il nome del file"<< endl ;
    }else{
        fstream conteggio,lettura;
        lettura.open(arg[1],ios::in);
        conteggio.open(arg[1],ios::in);

        
        int dimensione=0;
        char riga[100];
        while (!conteggio.fail() && conteggio.getline(riga,100))
        {
            dimensione++;
        }
        cout << dimensione << endl;
        

        studente ** db = new studente * [dimensione];
        
        int i=0;
        char nome[31];
        char cognome[31];
        int matricola;
        float media;
        
        if (db == nullptr)
        {
            cout << "Errore nell'allocazioe della memoria"<< endl;
            return 1;
        }
        

        while (lettura >> nome >> cognome >> matricola >> media)
        {

            
            db[i]=genera_studente(nome,cognome,matricola,media);
            i++;
        }
        for (int i = 0; i < dimensione; i++)
        {
            cout << "Riga [" <<  i<< "]-->";
            studente * s =db[i];
            stampa_studente(s);   
            cout << endl;
        }
        
        
    }
    
    return 0;
   

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
    cout << "Nome [" << s->nome << "] \t" ;
    cout << "cognome [" << s->cognome << "] \t";
    cout << "matricola [" << s->matricola << "] \t";
    cout << "media [" << s->media << "] \t";

    
}