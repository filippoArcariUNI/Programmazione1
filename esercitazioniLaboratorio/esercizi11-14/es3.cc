#include <iostream>
#include <fstream>
using namespace std;
void stampaArray(double arr[],int dimensione){

    for (int i = 0; i < dimensione; i++)
    {
        cout << arr[i] << "  ";
    }

}

void bubbleSortRec(double arr[],int dimensione, int i, int j){
    bool scambi=false;

     if (i<dimensione-1)
        {

            if (arr[i] < arr[i+1])
            {
          
                double t=arr[i+1];
                arr[i+1] = arr[i];
                arr[i]=t;
                scambi=true;

                
            }

            bubbleSortRec(arr,dimensione,i+1,j);
            
        }
    
    if (scambi || j<=dimensione-1)
    {
        i=0;
       bubbleSortRec(arr,dimensione,i,j+1);
        
    }else{
        return;
    }
   
}

int main(int nArg,char * arg[]){
    if (nArg!=4 )
    {
        cout << "Inserire i parametri nella forma : ./a.out [FileTemperature] [numeroTemperatureMaxVisualizzate] [NumeroTemperatureFile]"<< endl;
        return 1;
    }else{
        int dimArray=atoi(arg[3]);
        double * arrTemperature = new double[dimArray];
        if (arrTemperature==NULL)
        {
            cout << "Erorre nell'Allocazione della memoria"<< endl;
            return 2;
        }
        
        fstream lettura;
        lettura.open(arg[1],ios::in);
        int i=0;
        while (!lettura.fail() && !lettura.eof())
        { 
            lettura >>  arrTemperature[i];
            i++;
        }
        
        stampaArray(arrTemperature,dimArray);
        cout<< endl;
        bubbleSortRec(arrTemperature,dimArray,0,0);
        cout << "le Temperature Massime sono :" << endl;
        stampaArray(arrTemperature,atoi(arg[2]));
        cout<< endl;
        delete[] arrTemperature; 
    }

    return 0;
}