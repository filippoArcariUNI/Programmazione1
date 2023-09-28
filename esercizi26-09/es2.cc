#include <iostream>
using namespace std;

int main(){
    int  a,b;
    double risultato;
    cout << "Inserisici il Primo Numero"<< endl;
    cin >> a;  
    cout << "Inserisici il Secondo Numero"<< endl;
    cin >> b;  

    bool isNegative =(a-b)<0;
    risultato=(a-b)+(2*(b-a)*isNegative);
    cout << "il Risultato é --> " << risultato << endl;

       
}