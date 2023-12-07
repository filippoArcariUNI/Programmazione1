#include <iostream>
#include "treeChar.h"
using namespace std;

int main(){
    char c;
    albero t;
    treeInit(t);
    do
    {
        cout << "Inserisci una lettera, [1] per terminare \n";
        cin >> c;
        addElement(t,c);
        printTree(t);
    } while (c!='1');
    cout << endl;
    cout << "l' albero ordinato è --> ";
    printOrdered(t);
    char search;
    cout << "ricerca un elemento:" ;
    cin >> search;

    treeSearch(t,c);

    
}