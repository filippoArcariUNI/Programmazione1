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
    strcpy(parole[i],NULL);
    // cout << parole<< endl;
    while(input >> buffer)
    {
        strcpy(parole[i],buffer);  
    
        bool isPresente=false;
        for (int j = 0; j <= i; j++)
        {
            if (!strcmp(parole[j],buffer))
            {
                isPresente=true;
            }
            
        }
        cout << isPresente << endl;
        if (isPresente)
        {
            strcpy(parole[i],buffer);   
        }else{
            int index=findIndex(parole,buffer);
            numeri[index]+=1;
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
    for (int i = 0; i < strlen(*parole); i++)
    {
        if(!strcmp(parole[i],buffer)){
            return i;
        }
    }
    return -1;
}