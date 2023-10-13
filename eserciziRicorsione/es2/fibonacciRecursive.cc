#include <iostream>
using namespace std;

long long fibonacci(int n, int conuter){
    int nFibonacci=0;
    if(conuter <= n){
        if (conuter==0 || conuter==1)
        {
            nFibonacci=1;
            cout << nFibonacci << endl;
            conuter++;
            fibonacci(n,conuter);
        }else{
            nFibonacci=fibonacci(conuter-1,conuter)+fibonacci(conuter-2,conuter);
            cout << nFibonacci << endl;
            conuter++;
            fibonacci(n,conuter);

        }
        
    }
    return nFibonacci;
}

int main(){
    int n;
    cout << "Inserisci un Numero" << endl;
    cin >> n; 
    cout << fibonacci(n, 0) << endl;
}