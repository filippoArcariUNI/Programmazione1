#include <iostream>
#include "treeChar.h"
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

albero addElement(albero & tree, char value){

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

albero treeSearch(albero tree,char value){
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