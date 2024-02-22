#include <iostream>
using namespace std;

int main(){
    bool a,b, risutlato;

a=0;
b=0;
risutlato=(a and b) or (!(a) || !b) or !a;
cout << "Risultato : " << risutlato << endl;

a=0;
b=1;
risutlato=(a and b) or (!(a)|| !b) or !a;
cout << "Risultato : " << risutlato << endl;
a=1;
b=0;
risutlato=(a and b) or (! (a) || !b) or !a;
cout << "Risultato : " << risutlato << endl;
a=1;
b=1;
risutlato=(a and b) or (!(a) || !b) or !a;
cout << "Risultato : " << risutlato << endl;

}