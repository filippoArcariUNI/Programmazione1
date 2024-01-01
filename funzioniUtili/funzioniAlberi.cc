#include <iostream>
#include "tree.h"
using namespace std;



void stampaAlbero(albero radice, int spazio){
   if (radice != nullptr) {
    spazio ++;
    
    stampaAlbero(radice->dxChild, spazio);
 
    for (int i = 1; i < spazio; i++) {
        cout<<"\t";
    }
    cout<<radice->value<<"\n";
    
    stampaAlbero(radice->sxChild, spazio);
   }


}

void printTree(albero radice){
    stampaAlbero(radice,0);
}

void treeInit(albero  & tree){
    tree=nullptr;
}

albero addElement(albero & tree, int value){

    if (tree==nullptr)
    {
        tree=new node;
        tree->value=value;
        tree->dxChild=nullptr;
        tree->sxChild=nullptr;    
    }else{
       if (tree->value > value)
        {
        tree->sxChild = addElement(tree->sxChild,value);
        }else{
        tree->dxChild = addElement(tree->dxChild,value);
    } 
    }
    
    return tree;
}

void printOrdered(albero tree){
    if (tree!=nullptr)
    {
        printOrdered(tree->sxChild);
        cout << tree->value << " ";
        printOrdered(tree->dxChild);     
    }
}

albero treeSearch(albero tree,int value){
    if (tree)
    {
        if (tree->value==value)
        {
            return tree;
        }else if ((tree->value < value) )
        {
            cout << " Sinistra -> ";
            treeSearch(tree->dxChild,value);
        }else{
            cout << " Destra-> ";
            treeSearch(tree->sxChild,value);
        }
        
        
        
    }else if (tree->value==value){
        return  tree;
    }else{
        return nullptr;
    }
    
}

void deallocTree(albero tree){
    if (tree)
    {
        deallocTree(tree->sxChild);
        deallocTree(tree->dxChild);     
        delete tree; 
    }
}

tree* creaNodo(int data) {
    tree* temp = new tree;
    temp->value = data;
    temp->left = nullptr;
    temp->right = nullptr;
    return temp;
}

void insert_iter(tree*& result, const int num) {
    tree* newtree = creaNodo(num);
    tree* x = result;
    tree* y = nullptr;

    while (x != nullptr) {
        y = x;
        if (num < x->value)
            x = x->left;
        else
            x = x->right;
    }

    if (y == nullptr)
        result = newtree;
    else if (num < y->value)
        y->left = newtree;
    else
        y->right = newtree;
}

int altezza_iter(tree * root){
    if (root == nullptr) {
        return 0;
    }
    queue  * coda=init();
    
    enqueue(coda,root);
    
    int height = 0;
    while (!empty(coda))
    {
        int dim = size(coda);
        while (dim--)
        {
            const tree * front = first(coda);
            dequeue(coda);
 
            if (front->left) {
              enqueue(coda,front->left);
            }
            if (front->right) {
                enqueue(coda,front->right);
            }
        }
        height++;
    }
 
    return height;
}

int treeSum(const tree * root){
    if (root==nullptr)
    {
        return 0;
    }else{
        return root->info +treeSum(root->left)+treeSum(root->right);
    }
    
}