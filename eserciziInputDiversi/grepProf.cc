#include <fstream>
#include <cstring>
#include <iostream>
using namespace std;


bool grep_helper(const char * s, fstream * f){
        char carattere;
        int contatore=0;
        while (f->get(carattere)){
            
            cout << s[contatore];
            cout << endl;
            cout << carattere<< endl;
            cout <<"=========="<<  endl;


            if (carattere==s[contatore])
            {
                contatore++;
                cout << "ok" << endl;;
            }else if (s[contatore]== '\0'){
                return true;
            }else{
                contatore=0;
            }
        }
        
        if (s[contatore]=='\0')
        {
            return true;
        }else{
            return false;
        }
          
}

int main(int argC, char * argV[]){
    if (argC <3 ){
        cout << "Errore" << endl;
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
       }else{
            cout << "NON Trovato " << endl;
       }
        file.close();
       
    }
    
    return 0;
}