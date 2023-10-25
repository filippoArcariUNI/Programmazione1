//   scrivere una funzione che prenda come parametri 2 array di double
//   della stessa dimensione e ne calcoli il prodotto scalare.
//   a[0]*b[0] + ... + a[i]*b[i] + ... + a[dim-1]*b[dim-1]
#include <iostream>
using namespace std;

double prodottoScalare2Arr(double arr[],double arr1[],int i){
    double prodotto=0;

    if (i<=0)
    {
        return prodotto;
    }else{
        double prodottoCorrente=arr[i-1] * arr1[i-1];
        return prodottoCorrente + prodottoScalareArr(arr,arr1,i-1) ;
    }

}

void riempiArrayCasuale(double arr[],int dimensione){
    for (int i = 0; i < dimensione; i++)
    {
        arr[i]=rand() % 10 + 1; 
    }
}
void stampaArray(const double arr[],int dimensione){

    for (int i = 0; i < dimensione; i++)
    {
        cout << arr[i] << "  ";
    }

}
int main(){
    double arr[3];
    double arr1[3];

    
    srand(time(NULL));
    int dimensione=sizeof(arr)/sizeof(double);

    riempiArrayCasuale(arr,dimensione);
    riempiArrayCasuale(arr1,dimensione);
    stampaArray(arr,dimensione);
    cout << endl;
    stampaArray(arr1,dimensione);
    cout << endl;

    
    cout << "il prodotto Scalare dei 2 Array è --> " << prodottoScalareArr(arr,arr1,dimensione) << endl;

}