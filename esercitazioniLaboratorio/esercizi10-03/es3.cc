#include <iostream>
using namespace std;

int main(){
    int n;
   
do
    {
    cout << "Inserisci il valore N" << endl;
        cin >> n;
    } while (n<0 || n>1000);

    for (int i = 2; i < n; i++)
    {
        if ((n%i)==0)
        {
            cout << "il numero non è primo" << endl;
            return 0;
        }
        
    }
            cout << "il numero è primo" << endl;
    
}