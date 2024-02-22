#include <iostream>
using namespace std;
int * append(int * ,int *,int ,int );
void bubbleSortRec(int  arr[],int dimensione, int i, int j){
    bool scambi=false;

     if (i<dimensione-1)
        {

            if (arr[i] < arr[i+1])
            {
          
                double t=arr[i+1];
                arr[i+1] = arr[i];
                arr[i]=t;
                scambi=true;

                
            }

            bubbleSortRec(arr,dimensione,i+1,j);
            
        }
    
    if (scambi || j<=dimensione-1)
    {
        i=0;
       bubbleSortRec(arr,dimensione,i,j+1);
        
    }else{
        return;
    }
   
}
void stampaArray(int  arr[],int dimensione){

    for (int i = 0; i < dimensione; i++)
    {
        cout << arr[i] << "  ";
    }

}
int main(){
    int dimA,dimB;
    cout <<"Inserisci la dimensione dei 2 Array" << endl;
    cin >> dimA >> dimB;

    int * arrA=new int[dimA];
    int * arrB=new int[dimB];

    for(int i=0; i<dimA;i++){
        cout << "Inserisci il " << i+1 << " elemento del primo Array" << endl;
        cin >> arrA[i];
    }

    for(int i=0; i<dimB;i++){
        cout << "Inserisci il " << i+1 << " elemento del secondo Array" << endl;
        cin >> arrB[i];
    }

    int * arrCompleto=append(arrA,arrB,dimA,dimB);
    stampaArray(arrCompleto,dimA+dimB);

}
int * append(int * arrA, int * arrB,int dimA,int dimB){
    int dimensioneTotale=dimA+dimB;
    int * newArr=new int[dimensioneTotale];

    for(int i=0;i<dimA;i++){
        newArr[i]=arrA[i];
    }
    for(int i=dimA;i<dimB;i++){
        newArr[i+dimA]=arrA[i];
    }
    stampaArray(newArr,dimA+dimB);
    bubbleSortRec(newArr,dimensioneTotale,0,0);

    return newArr;
    
}