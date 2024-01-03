#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
void grep(char * str,char * cercata){
    int j=0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]==cercata[j] || cercata[i]=='*')
        {
            j++;
            
        }else{
            j=0;
        }

        if (cercata[j+1]=='\0')
        {
            cout<< str<< endl;
            j=0;
        } 
    }
}

int main(int nArg,char * arg[]){
     if (nArg != 2)
    {
        cout << "Usage: ./a.out <fileInput> <fileOutput> \n";
        exit(1);
    }
    fstream in,out;
    in.open(arg[1],ios::in);
    

    if (in.fail())
    {
        cout << "Errore nell' apertura dei file \n";
        exit(2);
    }
    char cercata[256];
    cout << "Inserisci la Parola da Ricercare: ";
    cin >> cercata;

    
    char str[256];
    while (in>> str)
    {
        grep(str,cercata);
    }
    
    in.close();
    
}