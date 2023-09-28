#include <iostream>
using namespace std;


int main(){
    bool f,v;

    f=false;
    v=true;

    cout << "la tabella dell' operatore &&:" << endl;
    
    cout << f  << f << "=>"<< (false && false)<< endl;
    cout << v  << f << "=>"<< (true && false)<< endl;
    cout << f  << v << "=>"<< (false && true)<< endl;
    cout << v  << v << "=>"<< (true && true)<< endl;

    cout << endl;

    cout << "la tabella dell' operatore ||:" << endl;
    cout << f  <<  f<< "=>"<< (false || false)<< endl;
    cout << v  <<  f<< "=>"<< (true || false)<< endl;
    cout << f  <<  v<< "=>"<< (false || true)<< endl;
    cout << v  <<  v<< "=>"<< (true || true)<< endl;

    cout << endl;
    
    cout << "la tabella dell' operatore xor:" << endl;
    cout << f  <<  f<< "=>"<< (false ^ false)<< endl;
    cout << v  <<  f<< "=>"<< (true ^ false)<< endl;
    cout << f  <<  v<< "=>"<< (false ^ true)<< endl;
    cout << v  <<  v<< "=>"<< (true ^ true)<< endl;


}
