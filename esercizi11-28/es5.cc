#include <iostream>
#include "coda.h"
#include "pila.h"
using namespace std;

int main(){
    char c;
    cout<< "Inserire un Parola o frase" <<endl;
    init();
    pila_init();

    for (int  i = 0; i < 100; i++)
    {
        cin>> c;
        pila_push(c);
        enqueue(c);
    }
    bool isPalindorma=true;
    for (int i = 0; i < 100; i++)
    {
        int t,s;
        pila_top(t);
        first(s);

        if (t!=s)
        {
            cout << "la Parola non è palindorma" << endl;
            break;
        }
        
        
    }
    
    
    
    return 0;
}