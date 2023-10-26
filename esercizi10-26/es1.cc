// Scrivere un programma che, chiesto in input all’utente un
// numero intero e una base che può assumere valore 2 oppure 8,
// stampi a video il numero e lo converta nella notazione binaria o
// ottale corrispondente ad 8 cifre. Nel caso il numero sia negativo
// o troppo grande per essere rappresentato a 8 cifre, il
// programma darà un messaggio di errore e chiederà all’utente di
// inserire un nuovo numero. Il programma stampi a video la
// codifica binaria o ottale del numero.
#include <iostream>
using namespace std;

int * conversioneBase(int numero, int base,int arr[], int i=7){

  if (i<0)
  {
    cout << "ERRORE, Numero troppo Grande" << endl;
    return 0;
  }
    
  
  if (numero==0){
    return arr;
  }else{
    int temp=numero%base;
    arr[i]=temp;
    conversioneBase(numero/base,base,arr,i-1);
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

}

int main(){
    int n;
    int arr[8]={-1};
    cout<< "Inserisci un numero intero" << endl;
    cin >> n;
    cout << "In Ottale ";
    stampaArray(conversioneBase(n,8,arr),8);
    cout << endl;
     cout << "In Decimale ";
    stampaArray(conversioneBase(n,2,arr),8);
    cout << endl;

}