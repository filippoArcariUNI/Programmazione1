#include <iostream>
using namespace std;
int dimNum(int n, int exp){
    if (n==0)
    {
        return exp/10;
    }else{
        dimNum(n/10,exp*10);
    }
    
}
bool isPalindormo(int n){
    if (n==0)
    {
        return true;
    }else{
        
        int dimensione= dimNum(n,1);
        int primo=n/dimensione;
        int ultimo=n%10;
        if (primo==ultimo)
        {
            n-=primo*dimensione;
            isPalindormo(n/10);
        }else{
            return false;
        }
        
    }
    
}

int main(){
 int n;
 cout << "inserisci un numero: ";
 cin >> n;  
 if (isPalindormo(n))
 {
    cout <<"è palindromo" << endl;
 }else{
    cout <<"NON è palindromo" << endl;

 }
  
}