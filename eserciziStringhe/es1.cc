#include <iostream>
#include <cstring>
using namespace std;

bool isPresente(char [], int , char );

int main(){
    char vocali[]={'a','e','i','o','u','A','E','I','O','U'};
    char s[100];
    cout << "Insersci una stringa" << endl;
    cin >> s;
    int counter=0;
    int dimStringa=strlen(s);

    for (int i = 0; i < dimStringa; i++)
    {
        char lettera=s[i];
        if (isPresente(vocali,10,lettera))
        {
         counter ++;   
        }
        
    }
    cout << "Sono state strovate " << counter << " vocali" << endl ; 
    return 0;
}

bool isPresente(char arr[],int dim, char cercato){
    for (int  i = 0; i < dim; i++)
    {
        if (arr[i]==cercato)
        {
            return true;
        }
        
    }
    return false;
}
