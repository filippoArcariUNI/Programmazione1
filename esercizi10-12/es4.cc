#include <iostream> 
using namespace std;



int main(){
    int a,max=0;
    
    int counter=0;

    do
    {
        cout << "Inserisci un Numero, '-1' per uscire"<< endl;
        cin >> a;
        if (a==-1)
        {
           break;
        }
        
        if (a>max)
        {
            max=a;
        }
        
        counter++;
    } while (counter<=4);

    cout << "il massimo é :" << max <<endl;
    
}