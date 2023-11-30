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

albero treeSearch(albero  tree,int value){
    if (tree)
    {
        if ((tree!=nullptr) && (tree->value > value) )
        {
            treeSearch(tree->sxChild,value);
            cout << "Sinistra, ";
        }else{
            treeSearch(tree->sxChild,value);
            cout << "Destra, ";
        }
        
    }else if (tree->value==value){
        return albero;
    }
    
}