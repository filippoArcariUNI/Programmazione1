#include <fstream>
#include <cstring>
#include <cmath>
#include <iostream>
using namespace std;

int encode(char * decoded,int key);
char * decode(int coded);

int main(int nArg, char ** arg){
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
    
    int key;
    do
    {
        cout << "Inserisci la chiave, massimo 7 cifre \n";
        cin>> key;
        
    } while (key>9999999);

    char parola[81];
    
    while (input>>parola)
    {
        parola[4]='\0';

        int x=encode(parola,key);
        char *p=decode(x);
        int dimStringa=strlen(p);

        for (int i =dimStringa-1; i>=0; i--)
        {
            output << p[i];
        }
        output<< " ";
        
    }
    
    
    
}

int encode(char * decoded ,int key){
    int temp36=0;
    int dimStringa =strlen(decoded);
    int n;
    for (int i = 0; i < dimStringa; i++)
    {
        if (decoded[i]>='0' && decoded[i]<='9')
        {
            n=decoded[i]-'0';
        }else{
            n = decoded[i]-'a'+10;
        }
        temp36 += n*pow(36,dimStringa-1-i);
    }
    temp36+=key;
    return temp36;
      
}
char * decode(int coded){
    int temp;
    char * criptedStr=new char[10];
    int i=0;
    while (coded!=0)
    {
        temp=coded % 36;
        if (temp >= 0 && temp <=9)
        {
            criptedStr[i]= (char) temp + '0';
        }else{
            criptedStr[i]= (char) temp + 'a'-10;  
        }
        coded /= 36;
        i++;
    }
    
    criptedStr[i]='\0';
    return criptedStr;
    
}