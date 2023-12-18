#include <iostream>
#define DIMCODA 100
using namespace std;
int coda[DIMCODA];
static int index1=0;
static int index2=DIMCODA;


void init(){
    for (int i = 0; i < DIMCODA; i++)
    {
        coda[i]=-1;
    }
    
}

bool enqueue(int n){
    int dim1=index1+1;
    int dim2=DIMCODA-index2;
    if (index1<index2)
    {
        if (dim1<=dim2)
        {
            coda[index1]=n;
            index1++;
        }else{
            coda[index2]=n;
            index2--;
        }
        return true;
    }else{
        return false;
    }
}

bool firstS1(int & n){
    cout << index1 << endl;
    if (coda[index1-1]!=-1 && index1-1>=0)
    {
        n=coda[index1-1];
        return true;
    }else{
        return false;
    }
}

bool firstS2(int & n){
    
    if (coda[index2+1]!=-1 && index2+1<=100)
    {
        n=coda[index2+1];
        return true;
    }else{
        return false;
    }
}

bool dequeueS1(){
    if (coda[index1-1]!=-1)
    {
        coda[index1-1]=-1;
        index1--;
        return true;
    }else{
        return false;
    }
}

bool dequeueS2(){
    
    if (coda[index2+1]!=-1)
    {
        coda[index2+1]=-1;
        index2++;
        return true;
    }else{
        return false;
    }
}

void deinit(){
    for (int i = 0; i < DIMCODA; i++)
    {
        coda[i]=-1;
    }
    
}

void print(){
    cout << "Coda 1 : ";
    for (int i = 0; coda[i]!=-1; i++)
    {
        cout << coda[i]<< " ";
    }
        cout<< endl << "Coda 2 : ";
    for (int i = DIMCODA; coda[i]!=-1; i--)
    {
        cout << coda[i]<< " ";
    }
    cout << endl;
}