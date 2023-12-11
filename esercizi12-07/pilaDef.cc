#include <iostream>
#include "stack.h"
using namespace std;
 
 
static bool pila_vuota (stack  pila) {
    return (pila == NULL);    
}
 
 
void pila_init(stack & pila){
    pila = NULL;
}
bool pila_top (stack & pila,long n) {
    
    bool risultatoOperazione;
    if (pila_vuota(pila)) {
        risultatoOperazione = false;
    }
    else {
        n=pila->value;
        risultatoOperazione = true;
    }
    return risultatoOperazione;
}
 
 
bool pila_push(stack & pila,long n) {
 
    bool risultatoOperazione;
    nodoPila * nuovoNodo = new (nothrow) nodoPila;
    if (nuovoNodo==nullptr) {
        risultatoOperazione = false;
    }
    else {
        nuovoNodo->value = n;
        nuovoNodo->next = pila;
        pila = nuovoNodo;
        risultatoOperazione = true;

    }
    return risultatoOperazione;
}
 
 
bool pila_pop (stack & pila) {  
    bool risultatoOperazione;
    if (pila_vuota(pila)) {
        risultatoOperazione = false;
    }
    else {
        stack primoNodo = pila;
        pila = pila->next;
        delete primoNodo;
        risultatoOperazione = true;
    }
    return risultatoOperazione;
}
 
void pila_deinit(stack & pila) {
    long tmp;
    while(pila_top(pila,tmp)) {
        pila_pop(pila);
    }
}
 
void pila_print(stack pila) {
 
  if (!pila_vuota(pila)) {
    nodoPila * nodoCorrente = pila;
    do {
      cout << nodoCorrente->value << endl;
      nodoCorrente = nodoCorrente->next;
    } while (nodoCorrente != NULL);
  }
}
