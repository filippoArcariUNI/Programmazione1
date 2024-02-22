#include <iostream>
#include <fstream>
using namespace std;

int indexMax(int * arr,int dim){
    int max=0;
    for (int i = 0; i < dim; i++)
    {
       if (arr[i]>max)
       {
            max=i;
       }
       
    }
    return max;
    
}

int main(int nArg,char * arg[]){
    if (nArg != 3)
    {
        cout << "Usage: ./a.out <fileInput> <fileOutput> \n";
        exit(1);
    }
    fstream input,output,contatore;
    contatore.open(arg[1],ios::in);
    input.open(arg[1],ios::in);
    output.open(arg[2],ios::out);

    if (input.fail() || output.fail())
    {
        cout << "Errore nell' apertura dei file \n";
        exit(2);
    }
    int righeCounter=0;
    char buffer[256];

    while (contatore.getline(buffer,256))
    {
        righeCounter++;
    }
    
    char arr[righeCounter][256];
    int numeri[righeCounter];
    int j=0;
    while (input.getline(buffer,256))
    {
        int i;

        for (i=0; buffer[i]!='\0'; i++)
        {
        
            arr[j][i]=buffer[i];
            
            // cout << arr[j];
        }
        arr[j][i]='\0';
        numeri[j]=i;
        j++;
        
    }
    
    for (int i = 0; i < righeCounter; i++)
    {
        output<<arr[i] <<" :  " << numeri[i]<< endl;
    }
    output<< endl;

    int maxIndex=indexMax(numeri,righeCounter);
    output<< "la Riga più lunga è :" << arr[maxIndex]<< "\t lunga :" << numeri[maxIndex] << " caratteri " << endl;
    


    input.close();
    contatore.close();
    output.close();

    return 0;
}