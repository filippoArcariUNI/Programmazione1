#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;

// Massimo numero di caratteri di una parola
const int MAX_LENGTH = 100;

// Massimi elementi singoli
const int MAX_WORDS = 100;
int contaPresenti(char db[MAX_WORDS][MAX_LENGTH], char * cercata, int contatoreParole);
int main(int argc, char *argv[]) {


  // Array che conterrà tutte le parole lette
  char database[MAX_WORDS][MAX_LENGTH];

  // Array che conterrà il conteggio di tutte le parole lette
  int contatore[MAX_WORDS];

  // Buffer di lettura
  char buffer[MAX_LENGTH];

  // Contatore delle parole lette
  int parole_lette = 0;

    if (argc != 3)
    {
        cout << "Usage: ./.a.out <input> <output> " << endl;
        exit(1);
    }
    
  fstream in, out;
  in.open(argv[1],ios::in);
  out.open(argv[2],ios::out);
  char word[MAX_LENGTH];
    int contatoreParole=0;    
  
  while (in >> word)
  {
    int i=0;
    bool valida=true;
    while (word[i]!='\0')
    {
        if (word[i]<'a' || word[i]>'z')
        {
            valida=false;  
        }
       i++;
    } 
    if (valida)
    {
        strcpy(database[contatoreParole],word);
        cout << database[contatoreParole]<< " ";
        contatoreParole++;
    }
    
  }

  for (int i = 0; i < contatoreParole; i++)
  {
    char * cercata=database[i];
    int t= contaPresenti(database,cercata,contatoreParole);
    contatore[i]=t;
  }

  for (int i = 0; i < contatoreParole; i++)
  {
    
  }
  
       
  for (int i = 0; i < contatoreParole; i++)
  {
    
    out << database[i]<< ": " << contatore[i] << "\n";
  }
  
  return 0;
}

int contaPresenti(char db[MAX_LENGTH][MAX_WORDS], char * cercata, int contatoreParole){
    int counter=0;
    for (int i = 0; i < contatoreParole; i++)
    {
        if (!strcmp(db[i],cercata))
        {
            counter++;
            
        }  
    }
    return counter;
}