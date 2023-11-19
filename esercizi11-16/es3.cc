// Modificare il programma scritto precedentemente implementando le funzioni
// definite sotto: la funzione cerca_matricola permette di cercare uno studente
// tramite il numero di matricola, la funzione cerca_nome_e_cognome permette di
// cercare uno studente per nome e cognome, mentre la funzione
// studente_top_media ritorna lo studente con la più alta media ponderata. Tutte le
// funzioni ritornano l’indice del database corrispondente.
// Si può utilizzare la funzione strcmp della libreria cstring.

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
studente * genera_studente(char nome[],char cognome[],int matricola, float media);
int cerca_matricola(studente ** database, int matricola, int DIM);
int cerca_nome_e_cognome(studente ** database, char * nome, char *cognome, int DIM);
int studente_top_media(studente ** database, int DIM);

int main(int nArg,char * arg[]){
    int matricolaCerrcata;
    char nomeR[31],cognomeR[31];
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
        
        cout << "Inserisci il numero di matricola da Ricercare"<< endl;
        cin >> matricolaCerrcata;

        cout <<"la Matricola Cercata corrisponde allo studente" << cerca_matricola(db,matricolaCerrcata,dimensione)<< endl;

        cout << "La media migliore è:"<< endl;
        cout << studente_top_media(db,dimensione)<< endl;

        cout << "Inserisci il Nome" << endl;
        cin >> nomeR;
        cout << "Inserisci il Cognome" << endl;
        cin >> cognomeR;
        
        int risutlatoRicerca=cerca_nome_e_cognome(db,nomeR,cognomeR,dimensione);

        if(risutlatoRicerca==-1){
            cout << "Studente non Trovato"<< endl;
        }else{
            cout << "lo studente é alla riga "<< risutlatoRicerca<< " del db" << endl;
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

int cerca_matricola(studente ** database, int matricola, int DIM){
    for(int i=0;i<DIM;i++){
        if(database[i]->matricola==matricola){
           cout << endl;
            cout << database[i]->nome<< endl;
            cout << database[i]->cognome<< endl;
            cout << database[i]->media<< endl;
             return database[i]->matricola;
        }
    }
    return -1;
}

int studente_top_media(studente ** database, int DIM){
    int maxMedia=0;
    for(int i=0;i<DIM;i++){
        if(maxMedia<=database[i]->media){
            maxMedia=database[i]->media;
        }
    }
    return maxMedia;
}

int cerca_nome_e_cognome(studente ** database, char * nome, char *cognome, int DIM){
    
    for(int i=0;i<DIM;i++){
        cout << i<< " ";
        char nomeS[]
        if(strcmp(database[i]->nome,nome) && strcmp(database[i]->cognome,cognome)){
            return i;
        }
    }
    return -1;

}
