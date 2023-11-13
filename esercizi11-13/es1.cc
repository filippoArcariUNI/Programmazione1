#include <iostream>
#include <cstdlib>
using namespace std;

int * filter(int *,int ,int &);
int * filter_rec(int *,int,int,int &);
void stampaArray(const int arr[],int dimensione){

    for (int i = 0; i < dimensione; i++)
    {
        cout << arr[i] << "  ";
    }

}

int main(){
    srand(time(NULL));
    int * arr;
    int dimA;
    int dimOut=0;
    cout << "Inserisci la Dimensione dell'Array" << endl;
    cin >> dimA;
    arr = new int[dimA];
    for (int i = 0; i < dimA; i++)
    {
        cout << "Inserisci il Valore che Desideri" << endl;
        int t;
        cin >> t;
        arr[i]=t;
    }
    int * arrPari=filter(arr,dimA,dimOut);
    
    arrPari=new int[dimOut];
    
    int j=0;
    for (int i = 0; i < dimA; i++)
    {
        if ((arr[i]%2)==0)
        {
            arrPari[j]=arr[i];
            j++;
        }
        
    }
    cout << "L' array con solo i valori pari è--> " ;
    stampaArray(arrPari,dimOut);

    cout << endl;
    delete[] arr;
    delete[] arrPari;


    return 0;
}

int * filter(int * arr,int dim,int & dimOut){
    if (dimOut!=0)
    {
        return arr;
    }else{
        
        filter_rec(arr,dim,0,dimOut);
    }
    
}

int * filter_rec(int * arr ,int dim ,int i ,int & dimOut){

    if (i==dim)
    {
        
        return arr;
    }else{
        if ((arr[i]%2)==0)
        {
            dimOut++;
          
        }
        filter_rec(arr,dim,i+1,dimOut);
    }
    
}