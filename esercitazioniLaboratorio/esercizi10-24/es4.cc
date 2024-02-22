#include <iostream>
using namespace std;

void inverti(int  arr[],int dimensione){
    int t[dimensione];
    for (int i=0;i<dimensione;i++){
      t[i]= *(arr + (dimensione-i-1));
    }
    
    for (int i = 0; i < dimensione; i++)
    {
        *(arr+i)=t[i];
    }
    


}
void stampaArray(const int arr[],int dimensione){

    for (int i = 0; i < dimensione; i++)
    {
        cout << arr[i] << "  ";
    }

}

int main(){
    int arr[10];
    srand(time(NULL));
    int dimensione=sizeof(arr)/sizeof(int);

    for (int i = 0; i < 10; i++)
    {
        arr[i]=rand() % 10 + 1; 
    }

    stampaArray(arr,dimensione);
    cout << endl;
    cout << "-------- Invertito ----------" << endl;
    inverti(arr,dimensione);
    stampaArray(arr,dimensione);
    cout << endl;
    
}