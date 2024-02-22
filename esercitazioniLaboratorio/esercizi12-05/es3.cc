#include <iostream>

using namespace std;
void stampaArray(const char arr[],int dimensione){

    for (int i = 0; i < dimensione; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;

}
int main(){
    char arr[]={'a','b','c','d','e'};
    char arrS[5];
    int s;
    cout << "Inserire lo shift"<< endl;
    cin >> s;
    stampaArray(arr,5);
    for (int i = 0; i < 5; i++)
    {
        arrS[i]=arr[(i-s+4)%5];
        
    }
    stampaArray(arrS,5);
    
}

