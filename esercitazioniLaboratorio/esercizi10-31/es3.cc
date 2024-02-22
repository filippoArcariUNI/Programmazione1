#include <iostream>
#include <cstdlib>
using namespace std;

const int righe=3;
const int colonne=3;

void stampaMatrice(int mm[righe][colonne]);
void RiempiMatrice(int  mm[righe][colonne]);
int sommaDiagonaleAlta(int  mm[righe][colonne]);



int main(){
    
    srand(time(NULL));

    int matrice[righe][colonne];
    
    RiempiMatrice(matrice);
    stampaMatrice(matrice);

    cout << "La somma della Matrice Alta è --> " << sommaDiagonaleAlta(matrice)<< endl;

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

int sommaDiagonaleAlta(int  mm[][colonne]){
    int somma=0;

    for (int i = 0; i < righe; i++)
    {
        for (int  j = 0; j < colonne; j++)
        {
           if (i<=j)
           {
                somma+=mm[i][j];
           }
           
        }
        
    }

    return somma;
    
}