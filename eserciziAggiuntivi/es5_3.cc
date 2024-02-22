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
int contaOccorrenze(int * arr , int cercato,int i, int dim){
    if (i==dim)
    {
        return 0;
    }else{
        if (arr[i]==cercato)
        {
            return 1+contaOccorrenze(arr,cercato,i+1,dim);
        }else{
            return contaOccorrenze(arr,cercato,i+1,dim);
        }
    }
}


int main(){
    const int dim=10;
    int arr[dim];
    int n;
    rimepiArray(arr,dim);
    stampaArray(arr,dim); cout << endl;
    cout<< "inerisci un numero da Cercare:";
    cin>>n;
    cout <<"il numero ["<< n<< "] copare " << contaOccorrenze(arr,n,0,dim)<<" volte/a" << endl;
    return 0;
}