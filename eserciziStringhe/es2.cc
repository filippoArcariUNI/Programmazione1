#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;


int main(int numArg, char * arg[]){
    
    if (numArg!=2)
    {
        cout << "errore "<< endl;
    }else{
        
        char strigaInvertita[100];
        char string[100];
        for (int  i = 0; i < strlen(arg[1]) ; i++)
        {
            
            string[i]=arg[1][i];
            
        }
        string[strlen(arg[1])]='\0';
        cout << string << endl;
        
        int j=0;
        for (int  i = strlen(string)-1; i>=0; i--)
        {
            
            strigaInvertita[j]=string[i];  
            j++;
        }
        strigaInvertita[j] = '\0';

        
        cout << "La stringa Invertita è --> " << strigaInvertita << endl;
        
        
    }
    
    return 0;
}