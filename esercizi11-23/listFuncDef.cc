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
    // cout << firstNode->val<< " ";  
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


void primalizzaLista(node *& firstNode){
    node * currentNode=firstNode;
    node * temp=currentNode;
    int i=1;
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
        i++;
    
    }

}

//21 3 343 2
//   r