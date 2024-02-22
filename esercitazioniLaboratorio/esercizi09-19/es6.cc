#include <iostream>
using namespace std;

int main(){
    int intero;
    double realedoppio;
    float reale;
    int somma, sottrazione;
    double divisione, moltiplicazione;
    cout << "inserisci un numero Intero :" << endl;
    cin >> intero;
    cout << "inserisci un numero reale Lungo :" << endl;
    cin >> realedoppio;
    cout << "inserisci un numero Intero :" << endl;
    cin >> reale;

    cout <<  "la somma intero + reale è :" ;
    somma = intero + reale;
    cout << somma << endl;

    cout <<  "la sottrazione double - intero è :" ;
    sottrazione = realedoppio - intero;
    cout << sottrazione << endl;

    cout <<  "la divizione intero / float è :";
    divisione = intero / reale;
    cout << divisione << endl;

    cout <<  "la moltiplicazione  intero * reale è :" ;
    moltiplicazione = intero * reale;
    cout << moltiplicazione << endl;
}