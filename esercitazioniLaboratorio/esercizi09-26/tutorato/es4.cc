#include <iostream>
using namespace std;

int main(){
    int a,b,quoziente,resto;
    
    cout << "Inserisci un numero intero" << endl;
    cin>> a;
        cout << "Inserisci un numero intero" << endl;
    cin>> b;

    quoziente= a/b;
    resto = a%b;

    cout << "il risultato di " << a << "/" << b << " è: "<< quoziente<< " resto " << resto << endl ;
    
}