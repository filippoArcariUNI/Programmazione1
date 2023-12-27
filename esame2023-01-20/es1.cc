#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int cript(char str[]);

int main(int nArg,char * arg[]){
     if (nArg != 3)
    {
        cout << "Usage: ./a.out <fileInput> <fileOutput> \n";
        exit(1);
    }
    fstream in,out;
    in.open(arg[1],ios::in);
    out.open(arg[2],ios::out);

    if (in.fail() || out.fail())
    {
        cout << "Errore nell' apertura dei file \n";
        exit(2);
    }
    int key;
    do
    {
        cout << "Inserire la chiave, max 7 cifre"<< endl;
        cin >> key;
    } while (key>10000000);
    
    char str[10];
    while (in>> str)
    {
        str[4]='\0';
        cout << str<< endl;
        int base36=cript(str);
        cout << base36<< endl;

    }
    
    in.close();
    out.close();
}

int pow(int n,int exp){
    int power=1;
for (int i = 1; i <= exp; i++)
{
    power*=n;
}
return power;
}

int cript(char str[]){
    int temp36=0;
    int base = 36;
    int dim=0;
    while (str[dim]!='\0')
    {
        dim++;
    }

    for (int i = dim-1; i>=0; i--)
    {
        if (str[i]>='0' && str[i]<='9')
        {
            temp36+= (str[i]-'0')*pow(base,(dim-1)-i);

        }else if (str[i]>='a' && str[i]<='z')
        {
            temp36+= ( str[i]-'A'+10 )*  pow(base,(dim-1)-i);
            cout<<( str[i]-'A'+10 )*  pow(base,(dim-1)-i)<< endl;
        }
        cout << temp36<< endl;
    }
    return temp36;
}
