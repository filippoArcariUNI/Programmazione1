#include <iostream>
using namespace std;
struct dataStruct
{
    int *data;
    int size,numData;
};
void stampaArray(const int arr[],int dimensione){

    for (int i = 0; i < dimensione; i++)
    {
        cout << arr[i] << "  ";
    }

    cout << endl;

}
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
void insertInBucket(dataStruct * bucket,int newItem);
void removeFromBucket(dataStruct * bucket,int index);

int main(){
    int tempVal,indexToRemove;
    dataStruct * data=new dataStruct;
    int dim=10;
    
    data->data=new int[dim];
    data->size=dim;
    data->numData=5;
    
    riempiArray(data->data,data->numData);
    stampaArray(data->data,data->size);
    cout << "Inserisci un Valore" << endl;
    cin >>tempVal;
    insertInBucket(data,tempVal);
    stampaArray(data->data,data->size);
    cout << "Inserisci un l' indice da RIMUOVERE" << endl;
    cin >>indexToRemove;
    removeFromBucket(data,indexToRemove);
    stampaArray(data->data,data->size);
    
    return 0;
    
}

void insertInBucket(dataStruct * bucket,int newItem){
    if (!(bucket->numData < bucket->size))
    { 
        resizeData(bucket,bucket->size+1);
        bucket->size=bucket->size+1;
    }
    bucket->data[bucket->numData]=newItem;
    bucket->numData=bucket->numData+1;
    
}
void removeFromBucket(dataStruct * bucket,int index){
    int dimensione=bucket->numData;
    if (index<dimensione-1)
    {
        bucket->data[index]=bucket->data[dimensione];
        delete bucket->data[index];
    }
    
    
    
}

