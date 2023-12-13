#include <iostream>
#include <fstream>

using namespace std;

struct nodo {
    int value;
    nodo* left;
    nodo* right;
};
typedef nodo* albero;

void bubbleSort(int * & arr, int n);
void stampaAlbero(albero radice, int spazio=0);
albero addElement(albero & tree, int value);
void deallocTree(albero tree);

int main(int nArg,char * arg[]){
    if (nArg != 2)
    {
        cout << "Usage: ./a.out <fileInput> \n";
        exit(1);
    }
    fstream conteggio,lettura;
    conteggio.open(arg[1],ios::in);
    lettura.open(arg[1],ios::in);


    if (conteggio.fail() || lettura.fail())
    {
        cout << "Errore nell' apertura dei file \n";
        exit(2);
    }

    albero root=nullptr;
    int n;
    int counter=0;
    while (conteggio>>n)
    {
        counter++;
    }
    int  * arr= new int[counter];
    int i=0;
    while (lettura>>n)
    {
        arr[i]=n;
        i++;
    }

    bubbleSort(arr,counter);

    for (int  i = 0; i < counter; i++)
    {
        addElement(root,arr[i]);
    }
    
    
    stampaAlbero(root);
    deallocTree(root);
    return 0;
}


/** Stampa dell'albero */
void stampaAlbero(albero radice, int spazio){
    if (radice != NULL) {
        spazio ++;

        stampaAlbero(radice->right, spazio);

        for (int i = 1; i < spazio; i++) {
            cout<<"\t";
        }
        cout<<radice->value<<"\n";

        stampaAlbero(radice->left, spazio);
    }
}

albero addElement(albero & tree, int value){

    if (tree==nullptr)
    {
        tree=new nodo;
        tree->value=value;
        tree->right=nullptr;
        tree->left=nullptr;    
    }else{
       if (tree->value > value)
        {
        tree->left = addElement(tree->left,value);
        }else{
        tree->right = addElement(tree->right,value);
    } 
    }
    
    return tree;
}

void deallocTree(albero tree){
    if (tree)
    {
        deallocTree(tree->left);
        deallocTree(tree->right);     
        delete tree; 
    }
}

void bubbleSort(int *& arr, int n)
{
    int i, j, temp;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
