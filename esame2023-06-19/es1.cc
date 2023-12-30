#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(int nArg,char * arg[]){
     if (nArg != 2)
    {
        cout << "Usage: ./a.out <fileInput> \n";
        exit(1);
    }
    fstream in;
    in.open(arg[1],ios::in);

    if (in.fail())
    {
        cout << "Errore nell' apertura dei file \n";
        exit(2);
    }
    char cercata[256];
    cout << "Insersci la parola da Ricercare"<<endl;
    cin >> cercata;
    int shift;
    cout <<"insersci lo Shifting"<< endl;
    cin>> shift;

    
    char str[256];
    while (in>> str)
    {
        
    }
    
    in.close();
}