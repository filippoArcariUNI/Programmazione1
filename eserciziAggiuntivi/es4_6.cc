#include <iostream>
using namespace std;

void sequenzadiHalistone(int n){
    if (n==1)
    {
        cout << endl;

    }else if ((n%2)==0)
    {
        n/=2;
        cout << n<< " ";
        sequenzadiHalistone(n);
    }else{
        n=(3*n)+1;
        cout << n<< " ";
        sequenzadiHalistone(n);
    }
}

int main(){
    int n;
    cout<< "Inserisci un numero:";
    cin >> n;
    cout << "La sequenza di Halistone è:";
    sequenzadiHalistone(n);
    return 0;
}