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

bool isPresente(char * str, char c,int dim){
    toLower(str);
    for (int i = 0; i < dim; i++)
    {
        if (c>='a' && c<='z')
        {
            if (str[i]==c)
            {
                return true;
            }
        }else if (c>='A' && c<='Z'){
            c-='A'-'a';
            if (str[i]==c)
            {
                return true;
            }
        }
        
        
        
    }
    return false;
}

int main(int nArg,char * arg[]){
     if (nArg != 2)
    {
        cout << "Usage: ./a.out <fileInput> \n";
        exit(1);
    }
    fstream in,out;
    in.open(arg[1],ios::in);
   

    if (in.fail())
    {
        cout << "Errore nell' apertura dei file \n";
        exit(2);
    }
    char caratteri [256];
    cout << "Inserisci la sequenza di Caratteri: ";
    cin>> caratteri;
    int dimCAratteri = strlen(caratteri);
    char c;
    while (in.get(c))
    {
        if (isPresente(caratteri,c,dimCAratteri))
        {
            cout << c << " ";
        }
    }
    
    in.close();
    
}