#include <iostream> 
using namespace std;

bool isPalindromo(int n){
    int inverso = inv(n)
    bool ok=false;
    
    
    
}
int inv(int n,int inv=0){
    if (n==0)
    {
        inv(n/10,n%10)
    }
    


}

int main(){
    int n;
    cout << "Inserisci un numero " << endl;
    cin >> n;
    cout << isPalindromo(n);
}