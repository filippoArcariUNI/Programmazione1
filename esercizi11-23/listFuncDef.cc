#include <iostream>
using namespace std;
#include "listFunc.h"


bool checkPrime(int n) {
  bool is_prime = true;


  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      return is_prime;
      
    }
  }

  return is_prime;
}
void deallocList(node *& firstNode){
    while(firstNode != nullptr){
        node * nextNode=firstNode->next;
        delete firstNode;
        firstNode=nextNode;
    }
}

void deallocListRec(node *& firstNode){

    if (firstNode->next==nullptr)
    {
        delete firstNode;
    }else{
        firstNode=firstNode->next;
        delete firstNode; 
        deallocListRec(firstNode);   
    }
}

void printListRec(node * firstNode){
    if(firstNode->next==nullptr){
        cout << firstNode->val<< " ";
        return;
    }else{
        cout << firstNode->val<< " ";
        node * nextNode=firstNode->next;
        firstNode=nextNode;   
        printListRec(firstNode);
    }
    
}

node * createNode(node * previusNode,int val){
    node * x =new node;
    x->val=val;
    x->next=nullptr;
    previusNode->next=x;
    return x;
}


void printList(node * firstNode){
    int i=0;
    while (firstNode!=nullptr)
    {
        
        cout << firstNode->val<< " ";
        firstNode=firstNode->next;
    }
    
    cout << endl;  
}

int coutList(node * firstNode){
    int i=0;
    while (firstNode!=nullptr)
    {
        firstNode=firstNode->next;
        i++;
    }
    return i;
}

void printReverseList(node * firstNode){
    int dimLista=coutList(firstNode);
    
    int * arr=new int[dimLista-1];
    int i=0;
    while (firstNode!=nullptr)
    {
        arr[i]=firstNode->val;
        firstNode=firstNode->next;
        i++;
    }
    
    for (int i = dimLista-1; i >= 0; i--)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
    delete[] arr;
     
}

void printReverseListRec(node * firstNode){
    if (firstNode!=nullptr)
    {
        printReverseListRec(firstNode->next);
    }

    cout << firstNode->val << " ";
}

node *  deleteElement(node * selectedNode){
    node * nextNode= selectedNode->next;

    delete selectedNode;
    return nextNode;
}
// 1 2 3 4 5 6 
//   r

void primalizzaLista(node *& firstNode){

    node * currentNode=firstNode;
    node * temp=currentNode;
    while (currentNode!=nullptr)
    {
        if (!checkPrime(currentNode->val))
        {  
            currentNode=deleteElement(currentNode);
            temp->next=currentNode;
        }else{
            temp=currentNode;
            currentNode=currentNode->next;
        }

    }

}

void primalizzaListaRec_helper(node*& firstNode, node* currentNode, node* temp) {
    if (currentNode == nullptr) {
        return;
    }

    if (!checkPrime(currentNode->val)) {
        currentNode = deleteElement(currentNode);

        if (temp != nullptr) {
            temp->next = currentNode;
        } else {
            firstNode = currentNode;
        }

        primalizzaListaRec_helper(firstNode, currentNode, temp);
    } else {
        primalizzaListaRec_helper(firstNode, currentNode->next, currentNode);
    }
}

void primalizzaListaRec(node*& firstNode) {
    primalizzaListaRec_helper(firstNode, firstNode, nullptr);
}

node * unisciListe(node * lista1,node* lista2){
    node * listaUnita=nullptr;
    node * t;
    while (lista1!=nullptr)
    {

        node * x =new node;
        x->next=nullptr;
        x->val=lista1->val;

        if (listaUnita==nullptr)
        {
            listaUnita=x;
        }else{
            t->next=x;
        }
        t=x;
        lista1=lista1->next;

    }

    while (lista2!=nullptr)
    {

        node * x =new node;
        x->next=nullptr;
        x->val=lista2->val;

        if (listaUnita==nullptr)
        {
            listaUnita=x;
        }else{
            t->next=x;
        }
        t=x;
        lista2=lista2->next;

    }
    return listaUnita;
}

node* unisciListeRec_helper(node* lista1, node* lista2, node* listaUnita, node* t) {
    if (lista1 != nullptr) {
        node* x = new node;
        x->next = nullptr;
        x->val = lista1->val;

        if (listaUnita == nullptr) {
            listaUnita = x;
        } else {
            t->next = x;
        }

        t = x;
        lista1 = lista1->next;

        return unisciListeRec_helper(lista1, lista2, listaUnita, t);
    } else if (lista2 != nullptr) {
        node* x = new node;
        x->next = nullptr;
        x->val = lista2->val;

        if (listaUnita == nullptr) {
            listaUnita = x;
        } else {
            t->next = x;
        }

        t = x;
        lista2 = lista2->next;

        return unisciListeRec_helper(lista1, lista2, listaUnita, t);
    }

    return listaUnita;
}

node* unisciListeRec(node* lista1, node* lista2) {
    node* listaUnita = nullptr;
    node* t = nullptr;

    return unisciListeRec_helper(lista1, lista2, listaUnita, t);
}