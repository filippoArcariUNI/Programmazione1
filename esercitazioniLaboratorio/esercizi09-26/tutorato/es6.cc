#include <iostream>
using namespace std;

int main(){
    int a;
   

    cout << "Insersici un numero minore di 256" << endl;
    cin >> a;

    cout << "Il numero in binario è:" << endl;

    cout << a /128;
    a %= 128;
    cout << a /64;
    a %= 64;
    cout << a /32;
    a %= 32;
    cout << a /16;
    a %= 16;
    cout << a /8;
    a %= 8;
    cout << a /4;
    a %= 4;
    cout << a /2;
    a %= 2;
    cout << a /1 << endl;

    
    
    
   

}
