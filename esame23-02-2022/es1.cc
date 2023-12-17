#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

#define MAXNUMERI 100
#define MAXLENGHT 100

char ** creaMatriceDinamica(int righe,int colonne){
    char ** matrice =new char*[righe];
    for (int  i = 0; i < righe; i++)
    {
        matrice[i] =new char[colonne];
    }
    return matrice;  
}
void stampaArray(const char arr[],int dimensione){

    for (int i = 0; i < dimensione; i++)
    {
        cout << arr[i] << "  ";
    }

}
void stampaArray(const int arr[],int dimensione){

    for (int i = 0; i < dimensione; i++)
    {
        cout << arr[i] << "  ";
    }

}
void deallocMatrix(int ** matrix, int rows){
    for (int i = 0; i < rows; ++i)
    delete [] matrix[i];
    delete [] matrix;
}

int findIndex(char **,char *);


int main(int nArg,char * arg[]){
    if (nArg != 3)
    {
        cout << "Usage: ./a.out <fileInput> <fileOutput> \n";
        exit(1);
    }
    fstream input,output;
    input.open(arg[1],ios::in);
    output.open(arg[2],ios::out);

    if (input.fail() || output.fail())
    {
        cout << "Errore nell' apertura dei file \n";
        exit(2);
    }
    int numeri[MAXNUMERI];
    char ** parole=creaMatriceDinamica(MAXNUMERI,MAXLENGHT);
    char buffer[MAXLENGHT];
    int i=0;
    while(input >> buffer)
    {
        bool valida=true;
        int dimBuffer=strlen(buffer);
        for (int  j = 0; j < dimBuffer && valida; j++)
        {
            if (buffer[j]>'z' || buffer[j]<'a')
            {
                valida=false;
            }
            
        }
        
        if (valida)
        {
            strcpy(parole[i],buffer);
            numeri[i]=1;
        }else{
            i--;
        }
        
        bool isPresente=false;
        for (int j = 0; j < i && !isPresente; j++)
        {
            if (!strcmp(parole[j],buffer))
            {
                isPresente=true;
                cout << parole[j]<< " " << buffer<< endl;
            }
            
        }
        
        if (isPresente && valida)
        {
            int index=findIndex(parole,buffer);
            // cout<< index<< " " << buffer ;cout.flush();
            if (index!=-1)
            {
                numeri[index]+=1; 
                // cout << numeri[index]<< endl;
            }    
        }
        if (isPresente)
        {
            i--;
        }
        
   
        i++;
    }

    for (int  j = 0; j < i; j++)
    {
        output << parole[j] << ": " << numeri[j]<< endl;
    }
    
    

    input.close();
    output.close();

    return 0;
}


int findIndex(char  **parole,char * buffer){
    int numParole=strlen(*parole);
    for (int i = 0; i < numParole; i++)
    {
        if(!strcmp(parole[i],buffer)){
            // cout <<  parole[i]<<" " << buffer;
            return i;
        }
    }
    
    return -1;
}