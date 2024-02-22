#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
void mytoLower(char *str){
    for ( int  i = 0; str[i]!= '\0'; i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {   
            str[i]-='A'-'a';
        }
    }
    
}
char * circularShift(char * str, int shift){
    
    int dim=strlen(str);
    
    char * temp=new char[dim];
    for (int  i = 0; i<dim; i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            int index=(i+shift+dim)%dim;
            cout << index << " " << str[index]<<endl;
            temp[i]=str[index];      
        }else{
              
        }
    }
    return temp;
}

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
    int shift;

    cout<< "Inserisci la Dimensione dello shift: ";
    cin >> shift;
    
    char str[256];
    while (in>>str)
    {
        int dim=strlen(str);
        mytoLower(str);
        
        
        char * newStr=circularShift(str,shift);
        cout<< newStr << endl;
    }
    cout << endl;
    in.close();
    out.close();
}