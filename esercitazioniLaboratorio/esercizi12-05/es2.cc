#include <iostream>
#include "matrixFunc.h"
using namespace std;

int main(){
    int righe,colonne;
    int subRighe,subColonne;
    int endRighe, endColonne;
    cout << "inserisci il numero di righe e di colonne: ";
    cin >> righe >> colonne;
    int ** matrix=creaMatriceDinamica(righe,colonne);
    RiempiMatrice(matrix,righe,colonne);
    stampaMatrice(matrix,righe,colonne);
    cout <<"Inserisci le cordinate dei punti di inizio della matrice che vuoi stampare, righe , colonne :";
    cin >> subRighe>> subColonne;
    cout <<"Inserisci le cordinate dei punti della fine della matrice che vuoi stampare, righe , colonne :";
    cin >> endRighe>> endColonne;
    if (subColonne >0 && subRighe>0 && endColonne<righe && endRighe < righe )
    {
        stampasottoMatrice(matrix,endRighe-1,endColonne-1,subRighe-1,subColonne-1);
    }else{
        cout << "Erorre";
    }
    
    
    deallocMatrix(matrix,righe);


}