#include <iostream>
using namespace std;

int pow(int n,int exp){
    int power=1;
for (int i = 1; i <= exp; i++)
{
    power*=n;
}
return power;
}

int somma(int n,int s=0,int rim=0,int couter=0){
        rim=n;
        couter++;
        
        int divisore=10;
        s+=n%divisore;
        n/=10;

        
        if (n>0)
        { 
            int temp=somma(n,s,rim,couter);
            if (temp>10)
            {
               return somma(temp,0,0,0);
            }else{
               return somma(n,s,rim,couter);
            }
        }
        
        return s;

}

int main(){
    int n=0;
    cout << "Inserisci numero" << endl;
    cin >> n;
    cout << "la somma delle cifre è " << somma(n) << endl;
}