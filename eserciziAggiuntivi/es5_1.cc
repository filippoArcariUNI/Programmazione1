#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void stampaArray(int * arr,int dim){

    for (int i = 0; i < dim; i++)
    {
        cout << arr[i]<<" ";
    }
}
void rimepiArray(int * arr, int dim){
    for (int i = 0; i < dim; i++)
    {
       arr[i]=rand()%10;
    }
}
int * shiftArray(int * arr,const int dim , int shift){
    int * shifted=new int[dim];
    for (int i = 0; i < dim; i++)
    {
        int index=(i+shift)%dim;
        shifted[i]=arr[index];
    }
    return shifted;
}

int main(){
    const int dim= 10;
    int arr[dim];
    int * shifted;
    int shift;
    rimepiArray(arr,dim);
    stampaArray(arr,dim);
    cout << endl;
    cout << "Inserisci lo shift:";
    cin>>shift;
    shifted=shiftArray(arr,dim,shift);
    stampaArray(shifted,dim);
    cout << endl;

    delete[] shifted;
    return 0;
}