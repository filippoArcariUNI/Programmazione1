#include <iostream>
using namespace std;

int main(){
    char c;

    cout << "inserisci un carattere" << endl;
    cin >> c;
    c-=32;
    cout <<"il carattere in MAIUSCOLO => " << c << endl;
}