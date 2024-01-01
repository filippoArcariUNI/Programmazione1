void trasponiMatrice(int  matrix[][colonne],int newMatrix[][righe]){
    for (int i = 0; i < righe; i++)
    {
        for (int  j = 0; j < colonne; j++)
        {
            newMatrix[i][j]=matrix[i][j];
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
void RiempiMatrice(int  matrix[righe][colonne]){
    for (int i = 0; i < righe; i++)
    {
        for (int  j = 0; j < colonne; j++)
        {
            matrix[i][j]=rand()%10;
        }
        
    }
    
}

void trasponiMatrice(int ** matrix,int ** newMatrix,int righe,int colonne){
    for (int i = 0; i < righe; i++)
    {
        for (int  j = 0; j < colonne; j++)
        {
            newMatrix[i][j]=matrix[i][j];
        }
        
    }
}

void stampaMatrice(int **matrix,int righe, int colonne){
    for (int i = 0; i < righe; i++)
    {
        for (int  j = 0; j < colonne; j++)
        {
           cout << matrix[i][j]<< " ";
        }
        cout << endl;
    }
    
}

void stampasottoMatrice(int  ** matrix,int righe ,int colonne, int x,int y){

    for (int i = x; i <= righe; i++)
    {
        for (int  j = y; j <= colonne; j++)
        {
           cout << matrix[i][j]<< " ";
        }
        cout << endl;
    }
    
}

void RiempiMatrice(int **matrix,int righe, int colonne){
    for (int i = 0; i < righe; i++)
    {
        for (int  j = 0; j < colonne; j++)
        {
            matrix[i][j]=rand()%10;
        }
        
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
void deallocMatrix(int ** matrix, int rows){
    for (int i = 0; i < rows; ++i)
    delete [] matrix[i];
    delete [] matrix;
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