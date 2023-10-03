#include <iostream>
using namespace std;

int main(){
    int n;
   
    cout << "Inserisci un numero" << endl ;
    cin >> n;

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