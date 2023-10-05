#include <iostream>
using namespace std;

int main(){
    bool p,q;
    cout << "inserisci 0 se falso e 1 se vera la P" << endl;
    cin >> p;
    cout << "inserisci 0 se falso e 1 se vero la Q" << endl;
    cin >>  q;
    cout << "La tabella verità del operatore implicazione (-->)" << endl;
    cout <<"P=" << p << " " << "Q="<< q << " --> "  << (! p || q)<< endl;
    return 0;
}