#include <iostream>
using namespace std;

int main(){
    char a,b;

    cout << "inserisci un carattere" << endl;
    cin >> a;
    cout << "inserisci un carattere" << endl;
    cin >> b;

    a+=b;
    b= a-b;
    a-=b;

    cout << a << endl;
    cout << b << endl;

}