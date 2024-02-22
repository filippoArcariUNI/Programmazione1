#include <iostream>
#include <cstdlib>
using namespace std;
struct dataStruct
{
    int *data;
    int size,numData;
};
void riempiArray(int arr[],int dim){
    for (int i = 0; i < dim; i++)
    {
        arr[i]=rand()%10;
    }
    
}

void resizeData(dataStruct * orig,int size){
    int * newArr=new int[size];
    orig->size=size;
    for (int  i = 0; i < size; i++)
    {
        newArr[i]=orig->data[i];
    }
    orig->data=newArr;
    delete[] newArr;
}
void stampaArray(const int arr[],int dimensione){

    for (int i = 0; i < dimensione; i++)
    {
        cout << arr[i] << "  ";
    }

    cout << endl;

}

int main(){
    srand(time(NULL));
    const int dim=10;
    int * arr=new int[dim];
    dataStruct * data=new dataStruct;
    int select;
    cout<< "Inserisci la nuova dimensione"<< endl;
    cin >> select;
    
    data->data=arr;
    data->size=dim;
    data->numData=select;

    riempiArray(data->data,dim);
    stampaArray(data->data,data->size);
    resizeData(data,select);
    stampaArray(data->data,data->size);
    delete data;
    delete[] arr;
    return 0;
}