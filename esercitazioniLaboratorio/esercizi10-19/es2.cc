#include <iostream>
using namespace std;

int MCD(int a,int b,int resto=0){
    resto=a%b;
    if ((a%b)>0)
    {
        return MCD(b,resto);
    }
    
    return b;


}
int main(){
    int a,b;
    cout << "Inserisci 2 numeri " << endl;
    do
    {
        cin >> a >> b;
        if (a<b)
        {
            cout << "Il primo numero deve essere maggiore del secondo" << endl;
        }
        
    } while (a<b);
   cout << "Il MCD è --> " <<  MCD(a,b)<< endl ;
}