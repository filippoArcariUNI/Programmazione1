#include <iostream>
#include <fstream>
#include "tree.h"
using namespace std;

int main(int nArg,char * arg[]){
    if (nArg!=2)
    {
        cout << "Inserire il file nella forma --> ./a.out <nomeFile.txt> "<< endl;
    }
    
    fstream lettura;
    lettura.open(arg[1],ios::in);
    if (lettura.fail())
    {
        cout << " Errore nella lettura del file "<< endl ;
    }
    
    int n;
    int cercato;
    albero padre;
    treeInit(padre);
    
    
    while (lettura >> n)
    {
        addElement(padre,n);
    }
    printTree(padre);
    cout <<"==== Ordinato ====" << endl;
    printOrdered(padre);
    cout << endl ;
    cout <<"Ricerca un valore :";
    cin >> n;
    cout << treeSearch(padre,n)<< endl;

    
}