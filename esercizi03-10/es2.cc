#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    double piGreco=0,intermedio;
    cout << "Inserisci il valore N" << endl;
    do
    {
    cin >> n;
    } while (n<0 || n>1000);
    
    for (int i = 1; i < n; i++)
    {
        intermedio+=1.0/(i*i);
    }
    piGreco=sqrt(intermedio*6);
    cout << piGreco<< endl;
    
}