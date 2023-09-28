#include <iostream>
using namespace std;

int main(){
    int n,exp ;
    cout << "inserisci la Base e poi l'Esponente" << endl,
    cin >> n >> exp;
    
    int potenza=1;
    cout << endl;
    for (int i = 1; i <=exp; i++)
    {
     potenza*=n;
    cout << potenza << endl;
    }
    

}