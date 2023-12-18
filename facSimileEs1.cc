#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(int nArg,char * arg[]){
     if (nArg != 4)
    {
        cout << "Usage: ./a.out <fileInput> <fileNumeri> <fileOutput> \n";
        exit(1);
    }
    fstream in,out;
    in.open(arg[1],ios::in);
    out.open(arg[2],ios::out);

    if (input.fail() || output.fail())
    {
        cout << "Errore nell' apertura dei file \n";
        exit(2);
    }
    
    char str[101];
    while (in>> str)
    {
        
    }
    
    in.close();
    out.close
}