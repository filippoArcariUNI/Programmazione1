#include <fstream>
#include <cstring>
#include <iostream>
using namespace std;


bool grep_helper(const char * s, fstream * f){
        char carattere;
        int contatore=0;
        while (f->get(carattere)){
            if (carattere==s[contatore])
            {
                contatore++;
            }else if (s[contatore]){
                return true;
            }else{
                contatore=0;
            }
            
        }   
}

int main(int argC, char * argV[]){
    if (argC <=3 ){
        cout << "Erorre" << endl;
        return 1; // Segnala che c'è stato qualcosa che non è andato a buon fine
    }
    char * stringaCercata=argV[1];
    for (int i = 2; i < argC; i++)
    {
       fstream file;
       file.open(argV[i],ios::in);
       if (grep_helper(stringaCercata,&file))
       {
            cout  << "trovato" << endl;
       }
        file.close();
       
    }
    
    return 0;
}