#include <iostream>
#include "pila_1.h"

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
bool pushP1(int  n){
    if (index1<=index2)
    { 
        pila[index1]=n;
        index1++;
        return true;
    }else{
        return false;
    }
}
bool pushP2(int  n){
    if (index1<=index2)
    {
        pila[index2]=n;
        index2--;
        
        return true;
    }else{
        return false;
    }
}

bool topP1(int  & n){
    if (index1>=0)
    {
        
       n=pila[index1-1];
       return true;
    }else{
        return false;
    }
    
}

bool topP2(int  & n){
    if (index2<dimensione)
    {
        cout << index2<< endl;
       n=pila[index2+1];
       return true;
    }else{
        return false;
    }
    
}

bool popP1(){
    cout << index1<< endl;
    cout << pila[index1-1]<< endl;
    if (index1>0)
    {
       index1--;
       pila[index1]=0;
       return true;
    }else{
        return false;
    }
    
}


bool popP2(){
    cout<< index2<< endl;
    cout << pila[index2+1]<< endl;

    if (index2<dimensione-1)
    {
       
       index2++;
       pila[index2]=0;
       return true;
    }else{
        return false;
    }
    
}

void deinit(){
    delete[] pila;
}

void print(){
    cout << "pila 1: ";
    for (int i = 0; i < index1; i++)
    {
        if (index1==0)
        {
            cout <<" Pila Vuota"<< endl;
        }else{
            cout << pila[i] << " ";

        }

        
    }
     cout << "\npila 2: ";
    for (int i = dimensione-1; i>index2; i--)
    {
        if (index2==dimensione-1)
        {
            cout << " Pila Vuota" << endl;
        }else{
            cout << pila[i] << " ";

        }
        
    }
    cout << endl;
    
}