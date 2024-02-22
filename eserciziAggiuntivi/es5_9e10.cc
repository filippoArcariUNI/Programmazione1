#include <iostream>
#include <cstdlib>
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
int occurrence(int * arr,int dim, int cercato){
    int n=0;
    for (int i = 0; i < dim; i++)
    {
        if (arr[i]==cercato)
        {
            n++;
        }
    }
    return n;
}

bool isPrinted(int * arr, int top, int element){
    for (int i = 0; i < top; i++)
    {
        if(arr[i]==element){
            return true;
        }
    }
    return false;
}

int main(){
    const int dim=10;
    int arr[dim];
    
    rimepiArray(arr,dim);
    stampaArray(arr,dim);cout << endl;
    cout << "##########################################"<< endl;
    
    for (int i = 0; i < dim; i++)
    {
        int num=occurrence(arr,dim,arr[i]);
        bool stampato=isPrinted(arr,i,arr[i]);
        if (num>=1 && !stampato)
        {
            cout<< "Occorrenze di "<< arr[i]<< " --> "<< num<< endl;
        }
        
    }
    
    return 0;
}