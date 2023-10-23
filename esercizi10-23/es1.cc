#include <iostream>
using namespace std;

bool isCrescente(int arr[],int i,bool ok=false){

    if (i>0)
    {
        int val1=*(arr + i);
        
        int val2=*(arr + (i-1));
        

        if( val1 > val2 ){
            ok= true;
        }else{
            ok= false;
            return ok;
        }
        isCrescente(arr, i-1,ok);
    }else{

        return ok;
    }
}

bool isDecrescente(int arr[],int i,bool ok=false){

    if (i>0)
    {
        // int val1=*(arr + i*sizeof(int));
        int val1=arr[i];
        // int val2=*(arr + (i-1) *sizeof(int));
        int val2=arr[i-1];

        if( val1 < val2 ){
            ok= true;
        }else{
            ok= false;
            return ok;
        }
        isDecrescente(arr, i-1,ok);
    }else{

        return ok;
    }
}

int main(){
    
    int arrM[]={1,2,3,4};
    int arrN[10];
    int lunghezzaM=sizeof(arrM)/sizeof(int);
    int lunghezzaN=sizeof(arrN)/sizeof(int);
    
    for (int i = 0; i < lunghezzaM; i++)
    {
        arrN[i]=arrM[i];
        
        
    }
    
    if ((isCrescente(arrM,lunghezzaM-1)) || (isDecrescente(arrM,lunghezzaM-1)))
    {
        for (int  i = 0; i < lunghezzaM; i++)
        {          
            arrN[i+lunghezzaM]=arrM[lunghezzaM-i-1];
        }
    }else{
        for (int  i = 0; i < lunghezzaM; i++)
        {
            
            arrN[i+lunghezzaM]=0;
        }
        
    }
    
    
    for (int i = 0; i < lunghezzaN; i++)
    {
        cout << arrN[i];
    }

    cout << endl;
    



}