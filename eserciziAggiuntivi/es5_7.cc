#include <iostream>
using namespace std;
void riempiArrayRec(int * arr, int dim, int i=0){
    if (i>=dim)
    {
        return;
    }else{
        arr[i]=rand()%10;
        riempiArrayRec(arr,dim,i+1);
    }
    
}
void stampaArrayRec(int * arr, int dim, int i=0){
    if (i>=dim)
    {
        cout << endl;
        return;
    }else{
        cout << arr[i]<< " ";
        stampaArrayRec(arr,dim,i+1);
    }
    
}
void invertiArrayRec(int * arr, int dim, int i=0){
    if (i<(dim-1)/2)
    {
        invertiArrayRec(arr,dim,i+1);
    }
    // cout << i << " "<< dim-i-1<<endl;
    int t=arr[i];
    arr[i]=arr[dim-i-1];
    arr[dim-i-1]=t;
    
    
}

int main(){
    const int dim=11;
    int arr[dim];
    riempiArrayRec(arr,dim);
    stampaArrayRec(arr,dim);
    invertiArrayRec(arr,dim);
    cout <<"---- Invertito ---- \n";
    stampaArrayRec(arr,dim);

    return 0;

}