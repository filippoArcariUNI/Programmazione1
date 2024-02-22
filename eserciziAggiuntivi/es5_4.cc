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

int partition(int * arr , int l,int h){
    int pivotVaule=arr[(l + h) / 2];
    int i=l;
    int j=h;
    while (i<=j)
    {
        while (arr[i]<pivotVaule){
            i++;
        }
        while (arr[j]>pivotVaule){  
            j--;
        }
        
        if (i<=j)
        {
            
            int t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
            i++;
            j--;
        }
    }
    return i;
}


void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex, high);
    }
}

int main(){
    const int dim =1000000;
    int arr[dim];
    rimepiArray(arr,dim);
    stampaArray(arr,dim); cout << endl;
    cout <<"-----Ordinato-----"<< endl;
    quickSort(arr,0,dim-1);
    stampaArray(arr,dim); cout << endl;
    return 0;
}