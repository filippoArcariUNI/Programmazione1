#include <iostream>
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