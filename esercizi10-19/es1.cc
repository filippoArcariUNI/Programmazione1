#include <iostream>
using namespace std;
int recPow(int base,int exp){

    if (exp<=0)
    {
        return 1; 
    }else{
        return base*recPow(base,exp-1);
    }
    
}
int main(){
    int b,e;
cout << "Inserisci la Base e l' esponente"<< endl ;
cin >> b >> e ;

cout << b<< " elevato alla "<< e << " fa : "<<  recPow(b,e)<< endl;

}