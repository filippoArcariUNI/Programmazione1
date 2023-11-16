#include <iostream>
using namespace std;
struct node
{
    int val=0;
    int * next=nullptr;
};

void printList(node * firstNode){
    while (firstNode->next!=nullptr)
    {
        cout << firstNode->val<< endl;;
        int * nextNode=firstNode->next;
        firstNode->next=nextNode;
    }
    
    
}

int main(){
    int nNodi;
    int newVal;
    cout<< "Quanti nodi vuoi Avere?"<< endl;
    cin >> nNodi;

    for (int i = 0; i <nNodi; i++)
    {
        cout << "Inserisci il valore del nodo" << endl;
        cin >> newVal;
        
        if (i==0)
        {
            int * x=new node;

            x->val=newVal;
            x->next=&node;
        }else{
            int x * =new node;
            x->val=newVal;
            x->next=nullptr;
            node.next= & x;
        }
        
        
    }
    
}
