#include <iostream> 
using namespace std;

int inv(int n,int rimanenza=0,int inverso=0){
    if (n==0)
    {
        return 0;
    }else{
        temp=n;
        inverso=inv(n/10,n%10);
    }
    return inverso;
}
bool isPalindromo(int n){
    int inverso = inv(n);
    bool ok=false;
    
    
    
}


int main(){
    int n;
    cout << "Inserisci un numero " << endl;
    cin >> n;
    cout << isPalindromo(n);
}