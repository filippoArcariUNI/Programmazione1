#include <iostream>
using namespace std;

int main(){
    int a; 
    char carattere;
    cout << "Inserisre un numero minore di 128 e maggiore di 97:"<< endl;
    cin >> a;

    carattere= (char) a;

    cout <<"il Carattere in codifica ascii è:"<< endl;
    cout << carattere<< endl;

}