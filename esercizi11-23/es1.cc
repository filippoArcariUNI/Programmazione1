#include <iostream>
#include <fstream>
#include "listFunc.h"
using namespace std;

void printListRec(node * firstNode);
void deallocList(node *& firsNode);
node * createNode(node * previusNode,int val);

int main(int nArg,char * arg[]){
    if (nArg != 2)
    {   
        cout << "Attenzione, Inserire nome del file nel segunete modo, ./a.out <nomeFile>"<< endl;
        exit(1);
    }
    fstream lettura;
    lettura.open(arg[1],ios::in);
    if (lettura.fail())
    {
        cout<< "Impossibilie leggere il file" << endl;
        exit(1);
    }
    
    
    node * root=nullptr;
    node * t=nullptr;
    int tVal;
    while (lettura >> tVal)
    {
        node * x=new node;
        x->next=nullptr;
        x->val=tVal;
        if (root==nullptr)
        {
            root=createNode(x,tVal);
        }else{
            t->next=x;
        }
        t=x;
    }

    printListRec(root);
    cout << endl;
    cout << "========la Lista Invertita è ========" << endl; 
    printReverseList(root);
    cout<< endl;
    primalizzaLista(root);
    printList(root);
    deallocList(root);
    return 0;
}



