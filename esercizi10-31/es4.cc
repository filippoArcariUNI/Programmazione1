#include <iostream>
#include <cstdlib>
using namespace std;

const int righe=3;
const int colonne=3;

void stampaMatrice(int mm[righe][colonne]);
void RiempiMatrice(int  mm[righe][colonne]);
void filtroMedio(int  mm[righe][colonne],int newm[][colonne]);
double media(int [], int dimensione);



int main(){
    
    srand(time(NULL));

    int matrice[righe][colonne];
    int mFiltroMedio[righe][colonne];
    RiempiMatrice(matrice);
    stampaMatrice(matrice);
    cout << "-------Filtro Medio---------" << endl;
    filtroMedio(matrice,mFiltroMedio);
    stampaMatrice(mFiltroMedio);

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


void filtroMedio(int  matrix[righe][colonne],int filtroMedio[][colonne]){
    for (int i = 0; i < righe; i++)
    {
        for (int  j = 0; j < colonne; j++)
        {
           if (j==colonne-1)
           {
                int arr[]={matrix[i][j-1],matrix[i-1][j]};
                matrix[i][j]=media(arr,2);
           }else if (i==righe-1)
           {
                int arr[]={matrix[i-1][j],matrix[i][j-1]};
                matrix[i][j]=media(arr,2);
           }else if (j==0 || i==0)
           {
                int arr[]={matrix[i+1][j],matrix[i][j+1]};
                matrix[i][j]=media(arr,2);
           }

           else{
                int arr[]={matrix[i-1][j-1],matrix[i][j-1],matrix[i-1][j],matrix[i+1][j+1]};
                matrix[i][j]=media(arr,4);
           }
           
           
        }
        
    }
    
}

void stampaArray(const int arr[],int dimensione){

    for (int i = 0; i < dimensione; i++)
    {
        cout << arr[i] << "  ";
    }

}

double media(int arr[], int dimensione){
    stampaArray(arr,3);
    cout << endl;
    double somma=*(arr);
    for (int  i = 1; i < dimensione-1; i++)
    {
        somma+=arr[i];
    }

    return somma/dimensione;
    
}
