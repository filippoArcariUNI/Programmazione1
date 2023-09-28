#include <iostream>
using namespace std;

int main(){
    int  a,b;
    int max,min;
    bool negativo;
    cout << "Inserisici il Primo Numero"<< endl;
    cin >> a;  
    cout << "Inserisici il Secondo Numero"<< endl;
    cin >> b;  

    negativo = a>b;
//sommo i 2 e tolgo il maggiore/minore
    max=a+b-(a*!negativo)-(b*negativo);
    min=a+b-(a*negativo)-(b*!negativo);


    cout << max << " > " << min<< endl;

}