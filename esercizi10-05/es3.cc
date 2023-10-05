#include <iostream>
using namespace std;

bool isPrime(int n){
    int counter=0;
 if ((n%2)==0)
 {
    counter++;
 }else if ((n%3)==0)
 {
    counter++;
 }else if ((n%5)==0)
 {
    counter++;
 }
 else if ((n%7)==0)
 {
    counter++;
 }
 else if ((n%11)==0){
    counter++;
 }
 if (counter<1){
    return true;
 }else
 {
    return false;
 }
 
}

int main(){
    int inpt;
    int rimanenza;
    cout << "Insericsci un numero"<< endl;
    cin >> inpt;
rimanenza=inpt;
cout << inpt;
    for (int i = rimanenza; i > 0 && rimanenza>0; i--)
    {
       if (isPrime(i))
       {
       cout << "=> :" << i;
        rimanenza-=i;
        i=rimanenza;
       }
    }
    

    return 0;
}
