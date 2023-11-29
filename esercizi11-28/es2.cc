#include <iostream>
#include "pila.h"
using namespace std;

bool verificaPila();

int main(){
    pila_init();
    char parentesi;
    cout<< "Inserisci una sequenza di Parentesi, q per terminare" << endl;
    while (cin >> parentesi && parentesi!='q')
    {
        int n;
    
        if (parentesi=='(')
        {
            n=1;
            pila_push(n);
            
        }else if(parentesi==')'){
            n=0;
            pila_push(n);
        }else{
            cout << "Errore, inserire le parentesi nella forma (_(_)_)"<< endl;
            exit(0);
        }
        
    }
    if (verificaPila())
    {
        cout << "Parentesi Ordinate " << endl;
    }else{
        cout << "Parentesi NON Ordinate " << endl;

    }
    
    pila_deinit();
    return 0;
}

bool verificaPila(){
    float i=0;
    int counter=0;
    int top;
    while (pila_pop())
    {
        pila_top(top);
        if (i==0 && top=='(')
        {
            return false;
        }else if (top==1)
        {
            counter++;
        }else{
            counter--;
        }
        
        i++;
       
        
    }
    if(top==')')
    {
        return false;
    }
    if (counter==0)
    {
        return true;
    } 
}