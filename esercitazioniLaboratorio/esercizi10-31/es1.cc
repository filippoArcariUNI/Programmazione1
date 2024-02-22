#include <iostream>
#include <cstdlib>
using namespace std;

const int righe=10;
const int colonne=10;

void stampaMatrice(int mm[righe][colonne]);
void RiempiMatrice(int  mm[righe][colonne]);


int main(){
    
    srand(time(NULL));

    int matrice[righe][colonne];
    RiempiMatrice(matrice);
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

