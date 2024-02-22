#include <iostream>
using namespace std;
void cript(char * parola, int key){
    for (int i = 0;parola[i]!='\0'; i++)
    {
        // cifrario di Cesare Circolare
        if (parola[i]>='a' && parola[i]<='z')
        {   
            parola[i]=((parola[i]-'a')+key)%('z'-'a')+'a'-1;
        }else if (parola[i]>='A' && parola[i]<='Z')
        {
            parola[i]=((parola[i]-'A')+key)%('Z'-'A')+'A'-1;
        }
        
    }
    
}

int main(){
    const int dimMax=25;
    const int key=6;
    char parola[25];
    cout << "Iserisci una parola o una frase, massimo "<< dimMax<< " caratteri \n";
    cin >> parola;
    cript(parola,key);
    cout << "---- Criptata in chiave: "<< key<<" ----"<<   endl;
    cout << parola<< endl;
}