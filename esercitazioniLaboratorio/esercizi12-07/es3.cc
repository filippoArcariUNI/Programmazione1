#include <iostream> 
#include <fstream>
using namespace std;



int main(int nArg,char * arg[]){
    if (nArg!=3)
    {
        cout << "Usage :./a.out <pattern> <fileInput>" << endl;
        exit(1);
    }
    fstream lettura;
    lettura.open(arg[2],ios::in);
    char  * ptn=arg[1];
    if (lettura.fail())
    {
        cout << " Errore nella lettura del file "<< endl;
        exit(2);
    }
    char c;  
    int occurenceCounter=0;  
    int i=0;
    while (lettura.get(c))
    {
        
        if (c==ptn[i])
        {
            i++;
            
        }else{
            i=0;
        }

        if (ptn[i]=='\0')
        {
            occurenceCounter++;
        }
        
        
    }

    lettura.close();
    
    cout << "inPattern: " << occurenceCounter << endl;
    return 0;
}