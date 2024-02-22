#include <iostream>
#include <cstdlib>
using namespace std;

int * generate_numbers(int n);
void stampaArray(int arr[],int dimensione){

    for (int i = 0; i < dimensione; i++)
    {
        cout << arr[i] << "  ";
    }

}

int main(int nArg,char * arg[]){

    srand(time(NULL));
    
    if (nArg!=2)
    {
        cout<< "Inserire i parametri in forma: ./a.out [numElementiArray]"<< endl;
    }else{
        int n=atoi(arg[1]);
        int * arr=generate_numbers(n);
        stampaArray(arr,n);
        cout << endl;
        delete[] arr;
    }
    return 0;
}

int * generate_numbers(int n){
    int * arr=new int[n];
    for (int  i = 0; i < n; i++)
    {
        arr[i]=rand()%100;
    }
    return arr;
}