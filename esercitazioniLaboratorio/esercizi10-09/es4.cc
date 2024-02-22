#include <iostream>
using namespace std;

double somma(double a, double b);
double sottrazione(double a, double b);
double divisione(double a, double b);
double moltiplicazione(double a, double b);


int main(){
    int a,b;
    char operatore;
    cout << "Inserisci 2 nuemri"<< endl;
    cin >> a >> b;
    cout << "Bene, ora seleziona l' operatore (a,s,m,d)"<< endl;
    do
    {
        bool tuttok==false;
        cin >> operatore;

    switch (operatore)
    {
    case 'a':
        cout << "la somma è: " << somma(a,b)<< endl;
        break;
    
     case 's':
        cout << "la somma è: " << somma(a,b)<< endl;
        break;

     case 'm':
        cout << "la somma è: " << somma(a,b)<< endl;
        break;

     case 'd':
        cout << "la somma è: " << somma(a,b)<< endl;
        break;
    default:
    coit << "Seleziona un operatore valido" 
        break;
    }
    } while ();
    
    
}
somma(double a, double b){
double risultato;
risultato=a+b;
 return risultato;
}

sottrazione(double a, double b){
double risultato;
risultato=a-b;
return risultato;
}

moltiplicazione(double a, double b){
double risultato;
risultato=a*b;
return risultato;
}

divisione(double a, double b){
double risultato;
risultato=1.0*a/b;
return risultato;
}