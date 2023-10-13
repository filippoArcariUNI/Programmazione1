#include <iostream>
using namespace std;
void scambio(double  *a ,double * b){

   double t= *a;
   *a=*b;
  *b=t;
}

int main(){
    double a,b;
    cout << "Inserisci 2 numeri" << endl;
    cin >> a >> b;

    cout << a << b << endl;
    scambio(&a,&b);
    cout << a << b << endl;

}