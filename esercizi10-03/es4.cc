#include <iostream>
using namespace std;

int main(){
    int n,counter;
    cout << "Inserisci il limite superiore " << endl ;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        counter=0;
       for (int j = 1; j < i; j++)
       {
           
        if (i%j==0)
        {
            counter++;
        }
        
       }
       if (counter<=1 )
        {
            cout << i << " è un numero primo minore di " << n << endl;
        }
       
        
    }
    
}