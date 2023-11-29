#include <iostream>
#include <fstream>
#include "pila.h"
using namespace std;

int main(int nArg,char * arg[]){
    if (nArg!=2)
    {
        cout<< "Errore : inserire il nome del file nella forma --> .//a.out <NomeFile>" <<endl;
    }else{
        pila_init();
        fstream lettura;
        lettura.open(arg[1],ios::in);
        int n;
        while (lettura >> n)
        {
            pila_push(n);
        }
        pila_print();
        pila_deinit();
    }
    return 0;
}