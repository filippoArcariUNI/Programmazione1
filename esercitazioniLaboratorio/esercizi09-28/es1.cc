#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c,det,x1,x2;
    cout << "Inserisci i coefficienti dell'equazione di secondo Grado (ax+by+c=0)"<< endl;
    cin >> a >> b >> c;
    det =(sqrt(pow(b,2)-4*a*c));
    if (det>0){
        x1=(-b+det)/2;
        x2=(-b-det)/2;
        cout << "le soluzioni sono " << "x1=" << x1 << " e x2=" << x2 << endl; 
    }else{
        cout << "Non ci sono soluzioni Reali" << endl;
    }
    


}