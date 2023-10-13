// realizzare ricorsivamente 
// la somma di due numeri avendo a disposizione incrermento 
// e decremento ++x e --x

#include <iostream>
using namespace std;
int summ(int n=0,int n1=0){
    int somma=0;
    if (n>=0)
    {
        somma+=n;
        summ(n-1);
        n--;
    }
    if (n1>0)
    {
        somma+=n1;
        summ(n1-1);
        n1--;
    }
    return somma;
}
int chiamaSumm(int n,int n1){
    int somma =0;
    somma=summ(n,n1);
    return somma;
}

int main(){
    int n,n1;
    cout << "IScerisci 2 Numeri " << endl;
    cin >> n >>n1;
    cout << "La loro somma è :" << chiamaSumm(n,n1)<< endl ;

}