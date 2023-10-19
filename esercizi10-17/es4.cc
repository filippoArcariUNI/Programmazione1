#include <iostream> 
using namespace std;

int inv(int n,int inverso=0){
    if (n==0)
    {
        return inverso;
    }else{
        inverso*=10;
        inverso+=n%10;
        
        
        inv(n/10,inverso);
    }
    
   
}

bool isPalindromo(int n){
    int inverso = inv(n);
    bool ok=false;
    if (inverso == n)
    {
        ok=true;
    }
    return ok;
    
}


int main(){
    int n;
    cout << "Inserisci un numero " << endl;
    cin >> n;
    cout << isPalindromo(n)<< endl;
}