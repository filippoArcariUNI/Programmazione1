#include <iostream>
using namespace std;

int pow(int n,int exp){
    int power=1;
for (int i = 1; i < exp; i++)
{
    power*=n;
}
return power;
}
void converti(int & n){
    int t=0;
    int appoggio=n;
    for (int  i = n%10; i>0; i--)
    {
        
        int temp=(appoggio%10);
        t+=temp*pow(10,i);
        int divisore=pow(10,i-(n%10));
        appoggio/=(divisore*10);
    }
    
    n=t;
    
}


int main(){
    int n;
    cout << "Insersci un numero" << endl ;
    cin >> n;
    converti(n);
    cout << n << endl;
}