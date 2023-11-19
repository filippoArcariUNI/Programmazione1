#include <iostream>
using namespace std;
struct node
{
    int val=0;
    node * next=nullptr;
};

void printList(node * firstNode);
void printListRec(node * firstNode);
void deallocList(node * firsNode);

int main(){
    int nNodi;
    int newVal;
    cout<< "Quanti nodi vuoi Avere?"<< endl;
    cin >> nNodi;
    node * firstNode=new node;
    node * pfirst=firstNode;
    for (int i = 0; i <nNodi; i++)
    {
        cout << "Inserisci il valore del nodo [" << i+1<<"]" <<endl;
        cin >> newVal;
        
        if (i==0)
        {
            firstNode->next=nullptr;
            firstNode->val=newVal;
        }else{
            node * x =new node;
            x->val=newVal;
            x->next=nullptr;
            firstNode->next=x;
            firstNode=x;
        }
        
        
    }
    cout << endl;
    printList(pfirst);
    cout << endl;
    printListRec(pfirst);
    deallocList(pfirst);
    return 0;
}

void printList(node * firstNode){
    do{
        cout << firstNode->val<< endl;
        node * nextNode=firstNode->next;
        firstNode=nextNode;
    }
    while (firstNode->next!=nullptr);
    cout << firstNode->val<< endl;
    
     
}

void printListRec(node * firstNode){
    if(firstNode->next==nullptr){
         cout << firstNode->val<< endl;
    }else{
        cout << firstNode->val<< endl;
        node * nextNode=firstNode->next;
        firstNode=nextNode;   
        printListRec(firstNode);
    }
}
void deallocList(node * firsNode){
    while(firsNode->next != nullptr){
        node * nextNode=firsNode->next;
        delete firsNode;
        firsNode=nextNode;
    }

    delete firsNode;
}