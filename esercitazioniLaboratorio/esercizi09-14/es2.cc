#include <iostream>
using namespace std;

int main(){
    int raggio;
    double area;
    double circonferenza;
    double pGreco=3.14159;
    cout << "Inserisci il Raggio della cierconferenza :";
    cin >> raggio;
    cout <<  endl;
    circonferenza = 2*raggio*pGreco;
    area=pGreco*raggio*raggio;

    cout << "la Circonferenza è: " <<  circonferenza << endl;
    cout << "L' Area è : " << area << endl ;

return 0;
}
