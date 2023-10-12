#include <iostream> 
using namespace std;



int chiamaFact(int n){
    int ris=0;
    if (n<=0)
    {
        ris=1;
      
    }else{
        ris=n*chiamaFact(n-1);
        n--;
    }

    return ris;
}

int main(){
    int n;
    cout << "Inserisci un numero:" << endl ;
    cin >> n;
    cout <<"Il Fattoriale di "<< n << " è:"<< chiamaFact(n) << endl;
}