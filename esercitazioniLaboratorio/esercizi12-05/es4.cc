#include <fstream>
#include <iostream>
using namespace std;

int main(int nArg,char ** arg){
    if (nArg!=2)
    {
        cout << "Usage: ./a.out <nomeFile>" << endl;
        exit(1);
    }
    fstream lettura;
    fstream scrttura;
    scrttura.open(arg[1],ios::app);
    lettura.open(arg[1],ios::in);
    char c[11];
    int i=0;
    int j=0;
    int numStar=0;
    while (lettura >> c)
    {
        j=0;
        while (c[j]!='\0')
        {
            numStar++;
            j++;
        }
        i++;
    }
    int media=numStar/i;
    cout << numStar<< " ";
    cout << i<< " ";

    cout << media;

    scrttura <<"\n";
    for (int i = 0; i < media; i++)
    {
        scrttura << "*";
    }
    
}