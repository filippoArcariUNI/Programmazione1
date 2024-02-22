#include <iostream>
using namespace std;

void decimaletoBinario(int n){
    if(n==0)
    {
        return;
    }

    decimaletoBinario(n/2); 
    cout << n%2; 
}   

int main(){
    int n=0;
    cout << "Inserisci un numero" << endl;
    cin >> n;
    decimaletoBinario(n);
    cout << endl;
}