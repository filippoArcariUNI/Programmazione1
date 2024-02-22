#include <iostream>
using namespace std;
void aggiungiArray(int arr[], int value, int indice,int dimensione){
    
    for (int i = dimensione-1; i > indice; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[indice]=value;
    for (int  i = indice-1; i < 0; i--)
    {
        arr[i]=arr[i];
    }
    

   
}
void stampaArray(const int arr[],int dimensione){

    for (int i = 0; i < dimensione; i++)
    {
        cout << arr[i] << "  ";
    }

}

int main(){
    int arr[10];
    int valore,index;
    srand(time(NULL));
    int dimensione=sizeof(arr)/sizeof(int);

    for (int i = 0; i < 10; i++)
    {
        arr[i]=rand() % 10 + 1; 
    }

    
    stampaArray(arr,dimensione);
    
    cout << endl;
    cout << "Inserisci un Valore e l' indice" << endl ;
    cin >> valore >> index;
    cout << "-------- aggiunto ----------" << endl;
    aggiungiArray(arr,valore,index,dimensione);

    stampaArray(arr,dimensione);
    cout << endl;

    
}