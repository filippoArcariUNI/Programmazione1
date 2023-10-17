#include <iostream>
using namespace std;

int decimaletoBinario(int n){
    if(n>0)
    {
        cout << n%2;
        decimaletoBinario(n/2);
        
    }else{
        return n;
    }
    
}

int main(){
    int n;
    cout << "Inserisci un numero" << endl;
    cin >> n;
    cout << "Il numero in binario è: " << decimaletoBinario(n) << endl;
}