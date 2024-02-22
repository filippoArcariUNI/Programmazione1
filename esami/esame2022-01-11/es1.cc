#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int num17(char * n);
int calcola(int n1,int n2,char operatore);
int pow(int n,int exp);

int main(int nArg,char * arg[]){
    if (nArg != 3)
    {
        cout << "Usage: ./a.out <fileInput> <fileOutput> \n";
        exit(1);
    }
    fstream input,output;
    input.open(arg[1],ios::in);
    output.open(arg[2],ios::out);

    if (input.fail() || output.fail())
    {
        cout << "Errore nell' apertura dei file \n";
        exit(2);
    }
    char n1[11];
    char n2[11];
    int b17 , b171;
    char operatore;
    while (input >> n1>> operatore >> n2)
    {
        b17=num17(n1);
        b171=num17(n2);
        output <<"Il risultato è : "<< calcola(b17,b171,operatore)<< endl ;
    }
    input.close();
    output.close();

    return 0;
}

//conversione In base n. basta cambiare la varibile base e le lettere aumentandone o diminuendole
int num17(char * n){
    int tmep17=0;
    int base = 17;
    int dim=strlen(n);
    
    for (int i = dim-1; i>=0; i--)
    {
        if (n[i]>='0' && n[i]<='9')
        {
            tmep17+= (n[i]-'0')*pow(base,(dim-1)-i);

        }else if (n[i]>='A' && n[i]<='G')
        {
            tmep17+= ( n[i]-'A'+10 )*  pow(base,(dim-1)-i);
        }
    }
    return tmep17;
}

int calcola(int n1,int n2,char operatore){
    int risultato;
    switch (operatore)
    {
    case '+':
       risultato=n1+n2;
        break;
     case '*':
       risultato=n1*n2;
        break;
    case '^':
       risultato=pow(n1,n2);
        break;
    default:
    cout << "Operatore Errato" << endl;
        break;
    }
    return risultato;
}

int pow(int n,int exp){
    int power=1;
for (int i = 1; i <= exp; i++)
{
    power*=n;
}
return power;
}