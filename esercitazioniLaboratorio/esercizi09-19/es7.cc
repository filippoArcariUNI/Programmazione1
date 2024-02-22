#include <iostream>
using namespace std;

int main(){
    int hh,mm,ss;
    int hh1,mm1,ss1;
    int totSec,totSec1,diffSec;
    int manchh,mancmm,mancss;

    cout << "inserisci l'ora" << endl;
    cin >> hh;
    cout << "inserisci i minuti" << endl;
    cin >> mm;
    cout << "inserisci i secondi" << endl;
    cin >> ss;

    cout << "inserisci l'ora di scadenza"<< endl;
    cin >> hh1;
    cout << "Adesso inserisci i minuti di scadenza"<< endl;
    cin >> mm1;
    cout << "Adesso inserisci i secondi di scadenza"<< endl;
    cin >> ss1;

    totSec=hh*3600+mm*60+ss;
    totSec1=hh1*3600+mm1*60+ss1;

    diffSec=totSec1-totSec;

    cout << "Mancano " << diffSec << " secondi alla Scadenza" << endl;

    manchh=diffSec/3600;
    mancmm=(diffSec%3600)/60;
    mancss=((diffSec%3600)/60)%60;
    cout << "Mancano " << manchh << " ore " << mancmm << " minuti " << mancss << " secondi alla scadenza" <<  endl;



}