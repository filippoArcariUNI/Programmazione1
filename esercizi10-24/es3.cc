#include <iostream>
using namespace std;

int max(const int arr[],int dimensione){
    int max=arr[0];
    for (int i = 1; i < dimensione-1; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        
    }
    return max; 
}
int min(const int arr[],int dimensione){
    int min=arr[0];
    for (int i = 1; i < dimensione-1; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
        
    }
    return min;    
}
double media(const int arr[],int dimensione){
    double media;
    double somma=arr[0];
    for (int i = 1; i < dimensione-1; i++)
    {
        somma+=arr[i];
    }
    media=somma/dimensione;
    return media;    
}
int main(){
    int arr[10];
    srand(time(NULL));
    int dimensione=sizeof(arr)/sizeof(int);
    for (int i = 0; i < 10; i++)
    {
        arr[i]=rand() % 10 + 1; 
    }

    for (int i = 0; i < 10; i++)
    {
       cout << arr[i]<< "  " ;
    }
    cout << endl;

    cout << "la media è --> " << media(arr,dimensione)<< endl;
    cout << "============="<< endl;
    cout << "il Valore MAX è --> " << max(arr,dimensione)<< endl;
    cout << "============="<< endl;
    cout << "il Valore min è --> " << min(arr,dimensione)<< endl;
    cout << "============="<< endl;

}