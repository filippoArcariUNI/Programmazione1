#include <iostream>
using namespace std;

int main(){
    int hh,mm,ss;
    int secondiTotali=0;
    int corhh,cormm,corss;
    cout << "Inserisci le ore nel formato hh mm ss";
    cin >> hh;
    cin >> mm;
    cin >> ss;
    secondiTotali=hh*3600+mm*60+ss;

    cout << "Da mezzanotte sono passati " << secondiTotali<< endl;
    corhh=secondiTotali/3600;
    cormm=secondiTotali%3600/60;
    corss=(secondiTotali%3600/60)%60;

    cout  << "e sono le" << corhh <<":" << cormm <<":"<< corss <<":";
}