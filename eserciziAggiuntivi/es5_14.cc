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
            matrix[i][j] = rand()%2;
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


bool trovaIsole(int i,int j,int ** matrix, int dim){
    if (i==0 && j==0)
    {
        if (matrix[i+1][j]==0 &&
            matrix[i][j+1]==0 && 
            matrix[i+1][j+1]==0)
        {
            return true;
        }
    }else if (i==0 )
    {
        /* code */
    }
    
    
}


int numIsole(int ** matrix,int dim){
    int n=0;
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            if (matrix[i][j]==1)
            {
                if (trovaIsole(i,j,matrix,dim))
                {
                    n++;
                }
                
            }
            
        }
        
    }
    return n;
    
    
}


int main(){
    const int dim=5;
    srand(time(NULL));
    cout <<time(NULL)<< endl; 
    
    int ** matrix=creaMatrice(dim,dim);
    riempiMatrice(matrix,dim,dim);
    stampaMatrice(matrix,dim,dim);
    cout <<"Numero Isole:" <<endl<<   numIsole(matrix,dim)<< endl;
    deallocMatrix(matrix,dim);
    return 0;
}