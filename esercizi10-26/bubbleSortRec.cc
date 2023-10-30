// Scrivere un programma che dichiari e poi inizializzi un array di 10 interi con valori
// randomici da 0 a 99 inclusi e lo stampi a video. Ordinare poi l’array implementando
// l’algoritmo Bubble Sort avendo cura di eliminare iterazioni inutili qualora l’array risulti
// ordinato. Si stampi a video, inoltre, il numero di iterazioni necessarie a ordinare l’array. 
#include <iostream>
#include <cstdlib>
using namespace std;

void riempimentoCasualeArray(int arr[], int dimensione);
void stampaArray(int arr[],int dimensione);
void bubbleSortRec(int [],int , int , int );

int main(){
    srand(time(NULL));
    const int dimensione=10;
    int arr[dimensione];
    riempimentoCasualeArray(arr,dimensione);
    stampaArray(arr,dimensione);
    bubbleSortRec(arr,dimensione,0,0);
    stampaArray(arr,dimensione);

    return 0;
}
void riempimentoCasualeArray(int arr[], int dimensione){

    for (int  i = 0; i < dimensione; i++)
    {
        arr[i]=rand()%10;
    }
    
}

void stampaArray(int arr[],int dimensione){

    for (int i = 0; i < dimensione; i++)
    {
        if (arr[i]!=-1)
        {
            
        cout << arr[i] << "  ";
        }
        
    }
    cout << endl;
    

}

void bubbleSortRec(int arr[],int dimensione, int i, int j){
    bool scambi=false;
    
    if (j<dimensione)
    {
        i=j;
        if (i<dimensione)
        {
            cout << endl;
            cout << arr[i]<< endl;
            cout << arr[i+1]<< endl;
            cout << "-----Scambiato-------"<< endl;

            if (arr[i] > arr[i+1])
            {
                int t=arr[i+1];
                arr[i+1] = arr[i];
                arr[i]=t;
                scambi=true;

            }
            cout << arr[i]<< endl;
            cout << arr[i+1]<< endl;
            cout << endl;

        }else{
            bubbleSortRec(arr,dimensione,i+1,j);
        }
        
    }else{
            bubbleSortRec(arr,dimensione,i,j+1);

    }


    if (!scambi)
    {
        return;
    }
   
}