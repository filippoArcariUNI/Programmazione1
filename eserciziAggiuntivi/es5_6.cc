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
bool isOrdrered(int * arr , int dim){
    bool order;
    for (int i = 0; i < dim-1; i++)
    {
        if (arr[i]<=arr[i+1])
        {
            order =true;
        }else{
            return false;
        }
        
    }
    return order;

}
void randomSort(int * arr,  int dim){
   bool ordinato=isOrdrered(arr,dim);
   cout << ordinato << endl;
    for (int i = 0; !ordinato ; i++)
    {

        int index=rand()%dim;
        int index1=rand()%dim;
        int t= arr[index];
        arr[index]= arr[index1];
        arr[index1]=t;
        ordinato=isOrdrered(arr,dim);
    }
    
}

int main(){
    const int dimA=5;
    int arrA[dimA];
    rimepiArray(arrA,dimA);
    stampaArray(arrA,dimA);cout << endl;
    randomSort(arrA,dimA);
    cout <<"----Ordinati----"<< endl;
    stampaArray(arrA,dimA);cout << endl;
    return 0;
}