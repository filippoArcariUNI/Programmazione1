#include <iostream>
using namespace std;

int main(){
int a,b,c,d,decimale;
cout << "Inserisci la prima cifra binaria" << endl;
cin >> a;
cout << "Inserisci la seconda cifra binaria" << endl;
cin >> b;
cout << "Inserisci la terza cifra binaria" << endl;
cin >> c;
cout << "Inserisci la quarta cifra binaria" << endl;
cin >> d;

cout<< "Il numero in Deciamale è:" << endl;
decimale = (a*(2*2*2))+(b*(2*2))+(c*(2))+d;
cout << decimale << endl;
}