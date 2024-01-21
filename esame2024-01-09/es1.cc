#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
int pow(int n,int exp){
    int power=1;
    for (int i = 1; i <= exp; i++)
    {
        power*=n;
    }
    return power;
}
int binarioToDecimal(char * num, int dim){
    int res=0;
   for (int i = dim; i>=0; i--)
   {
        // cout <<num[i]<<"*"<< pow(2,dim-i)<< endl;
        num[i]=num[i]-'0';
        res+=(num[i])*pow(2,dim-i);
   }
   return res;
    
}
int sommaArr(int * arr, int dim){
    int t=0;
    for (int i = 0; i < dim; i++)
    {
        t+=arr[i];
    }
    return t;
}

void elaboraRiga(char * riga,int * num, int & risultato){
    int j=0; 
    int k=0;   
    char numBinario[9];
    int i;
    char risultatoBinario[9];

    for (i = 0; riga[i-1]!='='; i++)
    {   
        if (riga[i]=='+' || riga[i]=='=')
        {
            num[k]=binarioToDecimal(numBinario,j-1);
            k++;
            for (int i = 0; i < j; i++)
            {
                numBinario[i]='@';
            }
            j=0;
            
        }else{
            numBinario[j]=riga[i];
            j++;
        }
    }
    int iRis;
    int dim=0;
    for (iRis = i; riga[iRis]!='\0'; iRis++)
    {
        if (riga[iRis]=='0' || riga[iRis]=='1')
        {
            risultatoBinario[iRis-i]=riga[iRis];
            // cout << iRis-i<<"->" << risultatoBinario[iRis-i]<< endl;
            dim++;
        }
        
    }
   
    
    risultato=binarioToDecimal(risultatoBinario,dim-1);
    
}


int main(int nArg,char * arg[]){
     if (nArg != 3)
    {
        cout << "Usage: ./a.out <fileInput> <fileOutput> \n";
        exit(1);
    }
    fstream in,out;
    in.open(arg[1],ios::in);
    out.open(arg[2],ios::out);

    if (in.fail() || out.fail())
    {
        cout << "Errore nell' apertura dei file \n";
        exit(2);
    }
    
    char riga[158];
    int numRiga[13]={0};
    
    
    int risultato;
    while (in>> riga)
    {
        for (int i = 0; i < 13; i++)
    {
        numRiga[i]=0;
    }
        elaboraRiga(riga,numRiga,risultato);
        int somma=sommaArr(numRiga,13);
        if (somma==risultato)
        {
            out << somma << endl;
        }else{
            out << "Errore" << endl;
        }
        
    }
    
    in.close();
    out.close();
}