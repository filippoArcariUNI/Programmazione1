#include <iostream>
#include "estrai.h"
#define MAX_DIM 81

using namespace std;

int main () {

    char stringa[MAX_DIM];
    char * risultato;
    
    cout << "Inserisci una stringa: " << endl;
    cin >> stringa;
    risultato = estrai_stringa(stringa);
    cout << "Il risultato è: " << risultato << endl;
    
    
    delete[] risultato;

    return 0;
}