#include <iostream>
#include "pila.h"

using namespace std;
static int index1;
static int index2;
int dimensione;
int * pila;

void init(int dim){
    index1=0;
    index2=dim-1;
    dimensione=dim;
    pila=new int[dim];
}
bool pushP1(float n){
    if ()
    {
        pila[index1]=n
        index1++;
        return true;
    }else{
        return false;
    }
}
bool pushP2(float n){
    if (index1<index2)
    {
        pila[index2]=n
        index1--;
        return true;
    }else{
        return false;
    }
}

bool topP1(float & n){
    if (index1>=0)
    {
       n=pila[index1];
       return true,
    }else{
        return false;
    }
    
}

bool topP2(float & n){
    if (index2<dimensione)
    {
       n=pila[index2];
       return true,
    }else{
        return false;
    }
    
}

bool popP1(){
    if (index1>=0)
    {
       pila[index1]=0;
       return true,
    }else{
        return false;
    }
    
}


bool popP2(){
    if (index2<dimensione)
    {
       pila[index2]=0;
       return true,
    }else{
        return false;
    }
    
}

void deinit(){
    delete[] pila;
}

void print(){
    cout << "pila 1:";
    for (int i = 0; i <= index1; i++)
    {
        cout << pila[i] << " ";
    }
     cout << "pila 2:";
    for (int i = index2; i < dimensione; i++)
    {
        cout << pila[i] << " ";
    }
    
}