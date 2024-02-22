#include <iostream>
#include "codaInt.h"
#include "pila.h"
using namespace std;

int main(){
    char c[100];
    int n;
    cout<< "Inserire un Parola o frase" <<endl;
    coda_init();
    pila_init();
    cin >> c;

    for (int i=0; c[i] != '\0'; i++)
    {
        n= (int) c[i];
        pila_push(n);
        coda_enqueue(n);
    }
    bool isPalindorma=true;
    for (int i = 0; i < 100; i++)
    {
        int coda;
        int pila;

        pila_top(pila);
        coda_first(coda);

        if (pila!=coda)
        {
            isPalindorma=false;
            break;
        } 
    }
    if (isPalindorma)
    {
        cout << "La strigna è palindroma"<< endl;
    }else{
        cout << "La strigna NON è palindroma"<< endl;

    }
    
    return 0;
}