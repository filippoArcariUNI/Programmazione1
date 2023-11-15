#include <iostream>
using namespace std;
void stampaMatrice(int  ** matrix,int righe ,int colonne){
    for (int i = 0; i < righe; i++)
    {
        for (int  j = 0; j < colonne; j++)
        {
           cout << matrix[i][j]<< " ";
        }
        cout << endl;
    }
    
}
void trasponiMatrice(int ** matrix,int colonne,int ** newMatrix,int righe){
    for (int i = 0; i < righe; i++)
    {
        for (int  j = 0; j < colonne ; j++)
        {        
            
            newMatrix[j][i]=matrix[i][j];
            
        }
        
    }
}


void RiempiMatrice(int ** matrix,int righe ,int colonne){
    for (int i = 0; i < righe; i++)
    {
        for (int  j = 0; j < colonne; j++)
        {
            matrix[i][j]=rand()%10;
        }
        
    }
    
}

int main(){
    int righe,colonne;
    cout << "Inserisci il numero di righe e di colonne" << endl;
    cin >>righe >> colonne;
 


    int ** matrix= new int*[righe];
    int ** newMatrix=new int*[colonne];

    for (int  i = 0; i < righe; i++)
    {
        matrix[i]=new int[colonne];
    }
    for (int  i = 0; i < colonne; i++)
    {
        newMatrix[i]=new int[righe];
    }
    
    RiempiMatrice(matrix,righe,colonne);
    stampaMatrice(matrix, righe,colonne);
    cout << "======== La matrice Trasposta è ===========" << endl;
    cout << endl;
    trasponiMatrice(matrix,colonne,newMatrix,righe);
    stampaMatrice(newMatrix, colonne,righe);
    
    
    for (int  i = 0; i < righe; i++)
    {
        delete [] matrix[i];
    }

    for (int  i = 0; i < colonne; i++)
    {
        delete [] newMatrix[i];
    }

    delete[] matrix;
    delete[] newMatrix;

    return 0;
}   