#include <iostream>
using namespace std;

int main(){
    bool a,b,c,risultato;
    cout << "inserisci un valore booleano (0 1)"<< endl;
    cin >> a;
    cout << "inserisci un valore booleano (0 1)"<< endl;
    cin >> b;
    cout << "inserisci un valore booleano (0 1)"<< endl;
    cin >> c;

    risultato= (a && b) || (!a && !b) || c;

    cout <<"il Risultato è: "<< risultato << endl;
}


