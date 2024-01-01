#include <iostream>
#include <cstdlib>
using namespace std;
void RiempiMatrice(int  ** matrix,int righe,int colonne){
    for (int i = 0; i < righe; i++)
    {
        for (int  j = 0; j < colonne; j++)
        {
            matrix[i][j]=rand()%10;
        }
        
    }
    
}
void stampaMatrice(int** matrice, int righe, int colonne) {
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
}
int ** creaMatriceDinamica(int righe,int colonne){
    int ** matrice =new int*[righe];
    for (int  i = 0; i < righe; i++)
    {
        matrice[i] =new int[colonne];
    }
    return matrice;  
}
void trasponiMatriceRecHelper(int ** matrix,int ** newMatrix,int righe, int colonne,int i,int j){
    if (i>=righe)
    {
        return;
    }else{
        if (j==colonne)
        {
            j=0;
            i++;
        }
        if (i<=colonne)
        {
            newMatrix[j][i]=matrix[i][j];
            j++;
        }
        trasponiMatriceRecHelper(matrix,newMatrix,righe,colonne,i,j);
    }
    
}
int ** trasponiMatriceRec(int ** matrix,int righe, int colonne){
    int ** t=nullptr;
    if(matrix){
        t=creaMatriceDinamica(colonne,righe);
        cout << endl;
        trasponiMatriceRecHelper(matrix,t,righe,colonne,0,0);
    }
    return t;
}
int main(){
    int righe = 3;
    int colonne = 2;

    int ** matrice=creaMatriceDinamica(righe,colonne);
    RiempiMatrice(matrice,righe,colonne);
    cout << "----Matrice----"<< endl;
    stampaMatrice(matrice,righe,colonne);
    int ** t=trasponiMatriceRec(matrice ,righe,colonne);
    cout << "----Maatrice Trasposta----"<< endl;
    stampaMatrice(t,colonne,righe);

    return 0;
}