#include <iostream>
#include <fstream>
#include "pila.h"
#include "codaInt.h"

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
        cout << "==== la pila Inverita è ====" << endl;
        int t;
        coda_init();
        while (pila_top(t))
        {
            coda_enqueue(t);
            pila_pop();
        }

        while (coda_first(t))
        {
            pila_push(t);
            coda_dequeue();
        }
            
        pila_print();
        coda_deinit();
        pila_deinit();
    }
    return 0;
}