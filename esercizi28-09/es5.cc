#include <iostream>
using namespace std;

int main(){
    char c;
    cout << "Inserisici una Lettera" << endl;
    cin >> c;

    switch (c)
    {
    case 'a':
    case 'A':
         cout << c << " è una Vocale"<< endl;
        break;
    case 'e':
    case 'E':
         cout << c << " è una Vocale"<< endl;
        break;
    case 'i':
    case 'I':
         cout << c << " è una Vocale"<< endl;
        break; 
    case 'o':
    case 'O':
         cout << c << " è una Vocale"<< endl;
        break;
    case 'u': 
    case 'U':
         cout << c << " è una Vocale" << endl;
        break;

    
    default:
         cout << c << " è una Consonante"<< endl;
        break;
    }
}