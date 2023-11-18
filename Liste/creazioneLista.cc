#include <iostream>
using namespace std;
struct node
{
    int val=0;
    node * next=nullptr;
};

void printList(node * firstNode){
    while (firstNode->next!=nullptr)
    {
        cout << firstNode->val<< endl;;
        node * nextNode=firstNode->next;
        firstNode->next=nextNode;
    }
    
    
}

int main(){
    int nNodi;
    int newVal;
    cout<< "Quanti nodi vuoi Avere?"<< endl;
    cin >> nNodi;
    node * firstNode=new node;

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
    printList(firstNode);
    return 0;
}
