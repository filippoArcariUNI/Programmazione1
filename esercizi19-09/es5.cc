#include <iostream>
using namespace std;

int main(){
double prezzo,aliquota,tot;
cout << "inserisci il prezzo scorporato dall' iva" << endl;
cin >> prezzo;
cout << "Perfetto, ora inseirsci l' aliquota corrente"<< endl;
cin >> aliquota;
tot= (prezzo*(100+aliquota))/100;
cout << "il prezzo ivato è: " << tot << endl;

}