#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

char ** creaMatriceDinamica(int righe,int colonne){
    char  ** matrice =new char*[righe];
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


int main(int nArg,char * arg[]){
     if (nArg != 4)
    {
        cout << "Usage: ./a.out <fileInput> <fileNumeri> <fileOutput> \n";
        exit(1);
    }
    fstream in,out,num,contaStr,contaNum;
    in.open(arg[1],ios::in);
    num.open(arg[2],ios::in);
    out.open(arg[3],ios::out);
    contaNum.open(arg[2],ios::in);
    contaStr.open(arg[1],ios::in);


    if (in.fail() || out.fail() || num.fail() || contaNum.fail() || contaStr.fail())
    {
        cout << "Errore nell' apertura dei file \n";
        exit(2);
    }
    
    char str[101];
    int numStr=0;
    int numNumeri=0;

    int d;
    while (contaStr >> str)
    {
        numStr++;
    }
    while (contaNum >> d)
    {
        numNumeri++;
    }
    
    char ** matrice=creaMatriceDinamica(numStr,101);
    int *numeri=new int[numNumeri];
    int i=0;
    while (in >> str)
    {
        stpcpy(matrice[i],str);
        i++;
    }
    i=0;
    while (num >> numeri[i])
    {
        i++;
    }

    for (int i = 0; i < numNumeri; i++)
    {
        int index=numeri[i];
        cout << index << " ";
        if (index>=0 && index<numStr)
        {
            out << matrice[index]<< " ";
            
        }else{
            out <<"MISSING ";
        }
        
    }
    
    
    
    deallocMatrix(matrice,numStr);
    delete[] numeri;
    contaNum.close();
    contaStr.close();
    in.close();
    out.close();
    return 0;
}    