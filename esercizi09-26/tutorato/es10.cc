#include <iostream>
using namespace std;

int main(){
    int n;
    char c;
    cout << "Inserisci un carattere" << endl;
    cin >> c;
    cout << "Inserisci un numero intero" << endl;
    cin >> n;


    c+=-'a'+n ;
    c %=('z'-'a');
    c+='a'-1;
    cout << "la lettera senza il cifrario di Cesare è:"<< endl;
    cout << c << endl;

}