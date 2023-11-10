// Si scriva una funzione che riceva come parametro una stringa di caratteri str e
// restituisca come valore di ritorno un numero intero. Dopo avere verificato che
// la stringa sia composta da caratteri alfabetici (escluso il carattere nullo), la
// funzione converte eventuali caratteri alfabetici maiuscoli in minuscoli; quindi
// calcola e restituisce un punteggio per la stringa str dato dalla somma delle
// differenze assolute tra ciascuna coppia di caratteri consecutivi. Ad esempio,
// data la stringa str = “aa”, la funzione restituisce 0; data la stringa str = “abf”, la
// funzione restituisce 5. Se la stringa non contiene solo caratteri alfabetici, la
// funzione restituisce -1. Si scriva quindi un main che, finché l’utente lo
// desidera, gli chieda di immettere da tastiera una stringa contenente al
// massimo 31 caratteri, chiami la funzione di cui sopra e, in caso di dato valido,
// ne stampi a video il valore di ritorno

#include <iostream>

#include <cmath>
using namespace std;

bool isAlphabetic(char []);
int sommaStringhe(char []);

int main(){
    char str[32]={'@'};
    bool ok=true;
    cout << "Inserisci una Stringa, se vuoi terminare premi Q" << endl;
    while (cin >> str)
    {
        if (str[0] == 'Q')
        {
            break;
        }
        
        for (int i = 0; i < 32; i++)
        {
            if (isAlphabetic(str))
            {
                ok=false;
            }
               
            
        }
        if (ok)
        {
            cout << "il punteggio della strigna  è ==> " << sommaStringhe(str)<< endl;
        }else{
           cout << "ATTENZIONE, inserire solo Caratteri" << endl;
           
        }
    }
    return 0;
}

bool isAlphabetic(char str[]){
   bool lettera=true;
   for (int  i = 0; i < 32; i++)
   {
        if (isdigit(str[i]) || str[i]=='\0')
        {
           return false;
        }
        
   }
   return lettera;
    
}

int sommaStringhe(char str[]){
    int delta= 'A'- 'a';
    int somma=0;
    for (int i = 0; i < 32; i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i]-delta;
        }
        
    }
    
    for (int i = 0; i < 30; i++)
    {
        if (str[i+1]!='\0')
        {
            int temp=abs(str[i]-str[i+1]);
            somma+=temp;
        }
        
        
    }
    return somma;
    
}