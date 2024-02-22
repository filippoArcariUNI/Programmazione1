#include <iostream>
using namespace std;

bool isPrime(int n){
    int counter=0;
 if ((n%2==0 && n!=2))
 {
    counter++;
 }else if ((n%3==0 && n!=3))
 {
    counter++;
 }else if ((n%5==0 && n!=5))
 {
    counter++;
 }
 else if ((n%7==0 && n!=7))
 {
    counter++;
 }
 else if ((n%11==0 && n!=11)){
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
    int inpt,i;
    int rimanenza;
    cout << "Insericsci un numero"<< endl;
    cin >> inpt;
rimanenza=inpt;
cout << inpt<< "=>";

      i=rimanenza;
   while (i>0)
   {
      if (isPrime(i))
       {
       cout << i;
        rimanenza-=i;
        i=rimanenza+1;
       if(i!=1){
         cout << "+";
       }
       }
       i--;
   }
   
    

    return 0;
}
