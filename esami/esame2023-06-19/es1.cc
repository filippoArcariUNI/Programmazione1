#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
void toLower(char * str){
    for ( int  i = 0; str[i]!= '\0'; i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {   
            str[i]-='A'-'a';
        }
    }
    
}

char * circularShiftRight(char * str, int shift){
    
    int dim=strlen(str);
    char * temp=new char[dim];
    for (int  i = 0; i<dim; i++)
    {
        int index=(i + (dim - shift))%dim;
        if (index < 0) {
            index += dim;
        }
        temp[i]=str[index];
        
    }
    return temp;
}

int grep(char * str,char * cercata){
    int count=0;
    int j=0;
        for (int i = 0; str[i]!='\0'; i++)
        {
            if (str[i]==cercata[j])
            {
                j++;
            }else{
                j=0;
            }

            if (cercata[j+1]=='\0')
            {
                count++;
                j=0;
            } 
        }
    return count;
}

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
    char * newCercata=  circularShiftRight(cercata,shift);
    toLower(newCercata);
    int occurence=0;
    char str[256];
    while (in>> str)
    {
        occurence+=grep(str,newCercata);
        
    }

    cout << occurence<<endl;
    delete[] newCercata;
    in.close();
}