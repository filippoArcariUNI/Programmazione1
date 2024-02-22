#include <iostream>
#include <cstdlib>
using namespace std;

int ** creaMatrice(int righe, int colonne){
    int ** riga=new int*[righe];
    for (int i = 0; i < righe; i++)
    {
        riga[i]=new int[colonne];
    }
    return riga;
}
void riempiMatrice(int ** matrix ,int righe, int colonne){
    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            matrix[i][j] = rand()%10;
        }
        
    }
    
}
void stampaMatrice(int ** matrix ,int righe, int colonne){
    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j< colonne; j++)
        {
           cout << matrix[i][j] <<" ";
        }
        cout << endl;
    }
    
}
void deallocMatrix(int ** matrix, int righe){
    for (int i = 0; i < righe; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}
int ** riduciMatrice(int ** matrice,int righe, int colonne, int rigadaRimuovere,int colonnadaRimuovere){
    int ** nuovaMatrice=creaMatrice(righe-1,righe-1);
    int subRow=0;
    for (int i = 0; i < righe; i++)
    {
        if (i==rigadaRimuovere)
        {
            i++;
        }
        int subCollum=0;
        
        if (i<righe)
        {
            for (int j = 0; j < colonne; j++)
            {
                if (j==colonnadaRimuovere)
                {
                    j++;
                }
                nuovaMatrice[subRow][subCollum]=matrice[i][j];
                subCollum++;
            }
            subRow++;
            
        }
        
    }
    // cout << "=========" << endl;
    // stampaMatrice(nuovaMatrice,righe-1,righe-1);
    // cout <<"========="<< endl;
    return nuovaMatrice;
}
int determinate(int ** matrix, int righe, int i=0){
    int det=0;
    if (righe==1)
    {
        det=matrix[0][0];
    }else if (righe==2)
    {
        det=(matrix[0][0]*matrix[1][1])-(matrix[1][0]*matrix[0][1]);
    }else{
        for (int i = 0; i < righe; i++)
        {
            int ** matriceRidotta=riduciMatrice(matrix,righe, righe,i,0);
            int rDet=determinate(matriceRidotta,righe-1,i+1);   
            if ((i%2)==0)
            {
                det+= matrix[i][0]*rDet;
                
            }else{
                det-= matrix[i][0]*rDet;
                
            }
          
        }
        
    }
    
    return det;
}

int main(){
    const int dim=10;
    
    int ** matrix=creaMatrice(dim,dim);
    riempiMatrice(matrix,dim,dim);
    stampaMatrice(matrix,dim,dim);
    cout << "Il determinante è -->" << determinate(matrix,dim) << endl;
    deallocMatrix(matrix,dim);
    return 0;
}