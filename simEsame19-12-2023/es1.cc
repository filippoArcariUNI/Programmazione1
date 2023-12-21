#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
void toLower(char * str){
    for ( int  i = 0; str[i]!= '\0'; i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {   
            str[i]-='A'-'a';
        }
    }
    
}
char * circularShift(char * str, int shift){
    
    int dim=0;
    for (int  i = 0; str[i]!='\0'; i++)
    {
        dim++;
    }
    char * temp=new char[dim];
    for (int  i = 0; i<dim; i++)
    {
        int index=(dim-1-i)%dim;
    
        temp[i]=str[index];
        
    }

    return temp;
}

char  ** creaMatriceDinamica(int righe,int colonne){
    char ** matrice =new char*[righe];
    for (int  i = 0; i < righe; i++)
    {
        matrice[i] =new char[colonne];
    }
    return matrice;  
}
void deallocMatrix(char ** matrix, int rows){
    for (int i = 0; i < rows; ++i)
    delete [] matrix[i];
    delete [] matrix;
}

int contaOccorrenza(char ** matrix, char * cercata,int righe){
    int counter=0;
    int dimPattern=strlen(cercata);
    for (int  i = 0; i < righe; i++)
    {
        int dimColonna=strlen(matrix[i]);
        int k=0;
        for (int  j = 0; j < dimColonna; j++)
        {
            if (matrix[i][j]==cercata[k])
            {
                k++;
            }else{
                k=0;
            }
            if (k==dimPattern)
            {
                counter++;
            }
        }
    }
    return counter;
}

int main(int nArg,char * arg[]){
     if (nArg != 2)
    {
        cout << "Usage: ./a.out <fileInput>  \n";
        exit(1);
    }
    fstream in,out,contatore;
    in.open(arg[1],ios::in);
    contatore.open(arg[1],ios::in);

    if (in.fail() || contatore.fail())
    {
        cout << "Errore nell' apertura dei file \n";
        exit(2);
    }
    
    char str[256];
    int nStringhe=0;
    
    while (contatore>> str)
    {
        nStringhe++;
    }
   
    char ** matrice=creaMatriceDinamica(nStringhe,256);
    int i=0;
    while (in>> str)
    {
        strcpy(matrice[i],str);
        i++;
    }

    int shift;
    char cercata[256];
    cout << "Inserisci una Parola e il suo shift " << endl;
    cin >> cercata >> shift;

    toLower(cercata);
    cout << cercata<< endl;

    char * temp=circularShift(cercata,shift);
    int occorrenza = contaOccorrenza(matrice,temp,nStringhe);
    cout << occorrenza<< endl;
    
    deallocMatrix(matrice,nStringhe);
    delete[] temp;
    in.close();
    contatore.close();
    out.close();
}