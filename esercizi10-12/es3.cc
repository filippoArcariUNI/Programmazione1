#include <iostream> 
using namespace std;

void conversione(int * hh , int * mm , int * ss){
    if (*ss >59)
    {
        *mm+=*ss/60;
        *ss%=60;
    }  if (*mm >59)
    {
        *hh+=*mm/60;
        *mm%=60;
    }

    
}

int main(){
    int hh,mm,ss;
    cout << "Inserisci le ore"<< endl;
    cin >> hh;
        cout << "Inserisci i minuti"<< endl;
    cin >> mm;
        cout << "Inserisci i secondi"<< endl;
    cin >> ss;

    conversione(&hh,&mm,&ss );
    cout << " Sono : " << hh <<" ore  :  " << mm <<" minuti : " << ss << " secondi" << endl;
}