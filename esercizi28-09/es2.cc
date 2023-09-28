#include <iostream>
using namespace std;

int main(){
    int a,b,c,min;
    cout << "inserisci 3 Nunmeri Interi"<< endl;
    cin >> a>> b >> c;
    if (a<=b && a<=c){
        min=a;
    }else if (b<=a && b<=c){
        min=b;
    }else if (c<=b && c<=a){
        min=c;
    }
    cout <<"Il minimo è: "<< min << endl; 
    
    
}