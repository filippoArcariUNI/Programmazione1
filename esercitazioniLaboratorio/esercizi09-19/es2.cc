using namespace std;
#include <iostream>

int main(){
    int hh,mm,ss;
    int secondiTotali=0;
    cout << "Inserisci le ore nel formato hh mm ss";
    cin >> hh;
    cin >> mm;
    cin >> ss;
    secondiTotali=hh*3600+mm*60+ss;
    cout << "Da mezzanotte sono passati " << secondiTotali<< endl;
    return 0;
}