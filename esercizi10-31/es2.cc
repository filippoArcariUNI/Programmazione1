#include <iostream>
#include <cstdlib>
using namespace std;

const int righe=3;
const int colonne=3;

void stampaMatrice(int mm[righe][colonne]);
void RiempiMatrice(int  mm[righe][colonne]);
void trasponiMatrice(int  mm[righe][colonne], int newM[colonne][righe]);



int main(){
    
    srand(time(NULL));

    int matrice[righe][colonne];
    int matriceTrasposta[colonne][righe];
    RiempiMatrice(matrice);
    stampaMatrice(matrice);
    cout << "-------Trasposta---------" << endl;
    trasponiMatrice(matrice,matriceTrasposta);
    stampaMatrice(matrice);

    return 0;

}

void RiempiMatrice(int  matrix[righe][colonne]){
    for (int i = 0; i < righe; i++)
    {
        for (int  j = 0; j < colonne; j++)
        {
            matrix[i][j]=rand()%10;
        }
        
    }
    
}

void stampaMatrice(int  matrix[righe][colonne]){
    for (int i = 0; i < righe; i++)
    {
        for (int  j = 0; j < colonne; j++)
        {
           cout << matrix[i][j]<< " ";
        }
        cout << endl;
    }
    
}

void trasponiMatrice(int  matrix[][colonne],int newMatrix[][righe]){
    for (int i = 0; i < righe; i++)
    {
        for (int  j = 0; j < colonne; j++)
        {
            newMatrix[i][j]=matrix[i][j];
        }
        
    }
}