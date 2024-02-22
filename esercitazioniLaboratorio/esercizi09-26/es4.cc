#include <iostream>
using namespace std;
 
int main(){
    double a,b;
    bool uguale;
    cout << "inserisci un numero" << endl;
    cin >> a;
    cout << "inserisci un numero" << endl;
    cin >> b;

    bool magg=(a<b);
    bool min=(b<a);
    
    uguale=(!magg && !min);
    
    cout << uguale<< endl;



    

}