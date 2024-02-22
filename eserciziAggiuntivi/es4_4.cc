#include <iostream>
using namespace std;
int sommaCifre(int n, int exp, int somma){
    if (n==0)
    {
        return somma;
    }else{
        int prima=n%exp;
        n-=prima;
        somma+=prima/(exp/10);     
        sommaCifre(n,exp*10,somma);
    }
    
}
int main(){
    int n;
    cout << "Inserisci un numero:" ;
    cin>> n;
    cout << "la somma delle cifre è: "<< sommaCifre(n,10,0)<< endl;
}