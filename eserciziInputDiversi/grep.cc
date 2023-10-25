#include <fstream>
#include <cstring>
using namespace std;

bool grep_helper(const char * s, fstream f){
        char carattere;
        int contatore=0;
        while (f.get(carattere)){
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

bool grep(const char * cercato, fstream file[],int numFile){
for (int  i = 0; i < numFile; i++)
    {
        if (grep_helper(cercato, file[i])){
        return true;
        }
    
    }

}

int main(int argC, char * argV[]){
    if (argC <=3 ){
        cout << "Erorre" << endl;
        return 1; // Segnala che c'è stato qualcosa che non è andato a buon fine
    }
    char * stringaCercata=argV[1];
    fstream file[];
    for (int  i = 2,j=0; i < argC; i++,j++)
    {
        file[j].open(argV,ios::in);
    }
    
    if (grep(stringaCercata,file,numFile))
    {
       cout << "Trovato" << endl
    }
    
    return 0;
}