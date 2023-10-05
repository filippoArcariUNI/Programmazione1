#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a,b,c;
    double delta;
    double risultato1;
    double risultato2;

    cout << "Inserisci i termini a,b,c dell'Equazione di 2 grado nella forma ax+by+c=0";
    cin >> a >> b >> c ;
    delta = sqrt(b*b - 4*a*c );
    if(delta>0){
    risultato1=(b*(-1)+ delta)/2;
    risultato2=(b*(-1)- delta)/2;

        cout << "i 2 risultati sono " << risultato1 << " e " << risultato2;

    }
    else{
        cout <<"Delta < 0";
    }

}
