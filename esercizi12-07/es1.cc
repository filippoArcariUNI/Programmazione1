#include <iostream> 
#include <fstream>
using namespace std;

int inPattern(char * str){
    int tempCounter=0;

    int i=0;
    for (; str[i]!='\0'; i++)
    {
        if (str[i]>='0' && str[i]<='9')
        {
            tempCounter++;

        }else{
            tempCounter=0;

        }
        
    }
    if (tempCounter==4 && i==4)
    {
        
        return 1;
    }else{
        return 0;
    }
    
}

int main(int nArg,char * arg[]){
    if (nArg!=2)
    {
        cout << "Usage :./a.out <fileInput>" << endl;
        exit(1);
    }
    fstream lettura;
    lettura.open(arg[1],ios::in);
    if (lettura.fail())
    {
        cout << " Errore nella lettura del file "<< endl;
        exit(2);
    }
    char str[50];    
    int cardCounter=0;
    int tempCardCounter=0;
    while (lettura >> str)
    {
        int c=inPattern(str);
        tempCardCounter+=c;
        if (!c)
        {
            tempCardCounter=0;
        }
        
        if (tempCardCounter==4)
        {

            cardCounter+=1;
            tempCardCounter=0;
            
        }
        
    }
    
    


    lettura.close();
    
    cout << "inPattern: " << cardCounter << endl;
    return 0;
}