//    scrivere una procedura che calcoli la norma di un vettore di double
//   (la radice quadrata del prodotto scalare con se' stesso).

#include <iostream>
#include <cmath>
using namespace std;

double prodottoScalare2Arr(double arr[],double arr1[],int i){
    double prodotto=0;

    if (i<=0)
    {
        return prodotto;
    }else{
        double prodottoCorrente=arr[i-1] * arr1[i-1];
        return prodottoCorrente + prodottoScalare2Arr(arr,arr1,i-1) ;
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
    int dimensione=sizeof(arr)/sizeof(double);
    riempiArrayCasuale(arr,dimensione);
    stampaArray(arr,dimensione);
    
    double prodottoScal=prodottoScalare2Arr(arr,arr,dimensione);
    double norma=sqrt(prodottoScal);
    cout << endl;
    cout << "la Norma del vettore è --> " << norma << endl;



}