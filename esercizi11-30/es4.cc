#include <fstream>
#include <iostream>
using namespace std;

int main(int nArg, char ** arg){
    if (nArg!=2)
    {
        cout << "Inserire il file nella forma --> ./a.out <nomeFile.txt> "<< endl;
        exit(1);
    }
    fstream lettura,scrittura;
    lettura.open(arg[1],ios::in);
    scrittura.open("output.txt",ios::out);
    if (lettura.fail())
    {
        cout << " Errore nella lettura del file "<< endl;
        exit(2);
    }
    if (scrittura.fail())
    {
        cout << " Errore nella scrittura del file "<< endl;
        exit(3);
    }
    
    char c;
    bool nextUpper=true;
    while (lettura.get(c))
    {
        if (c=='.'|| c=='!' || c=='?')
        {
            nextUpper=true;
        }
        if (c>='a' && c<='z')
        {
            if (nextUpper)
            {
                c -= 'a' - 'A';    
                nextUpper=false;
            }
        }
        cout << c <<" "<< nextUpper;
        scrittura << c;
    }
    cout << endl;
        

    return 0;
}