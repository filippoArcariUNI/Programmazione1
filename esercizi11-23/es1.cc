#include <iostream>
#include <fstream>
#include "listFunc.h"
using namespace std;
// struct node
// {
//     int val=0;
//     node * next=nullptr;
// };

void printList(node * firstNode);
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
    
    node * firstNode=new node;
    node * root=nullptr;
    int tVal;
    while (lettura >> tVal)
    {
        if (root==nullptr)
        {
            root=createNode(firstNode,tVal);
        }else{
            if (root->next==nullptr)
            {
                firstNode=createNode(root,tVal);
            }else{
                
                firstNode=createNode(firstNode,tVal);
            }
        }
    }
    
    // cout << endl;
    // printList(root);
    // cout << endl;

    printListRec(root);
    cout << endl;
    cout << "========la Lista Invertita è ========" << endl; 
    printReverseList(root);
    cout<< endl;
    node * listaPrimo=primalizzaLista(root);
    printList(listaPrimo);
    deallocList(root);
    
    return 0;
}



