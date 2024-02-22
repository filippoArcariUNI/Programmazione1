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

void spostaZeri(int * arr, int dim){
    int k=dim-1;
    int zeri=0;
    for (int i = 0; i < dim - zeri;i++)
    {
        if (arr[i]==0)
        {
            
            for (int j = i; j < dim-1; j++)
            {
                arr[j]=arr[j+1];
            }
           
            arr[k]=0;
            k--;
            zeri ++;
        }
        
    }
    
}

int main(){
    srand(time(NULL));
   
    cout << time(NULL) << endl;
    const int dim=10;
    int arr[dim];
    
    rimepiArray(arr,dim);
    stampaArray(arr,dim);cout << endl;
    cout << "##########################################"<< endl;
    spostaZeri(arr,dim);
    stampaArray(arr,dim);cout << endl;
    
   
    return 0;
}