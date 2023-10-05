 #include <iostream> 
 using namespace std;
 int main(){
    char a,b;
    cout << "Inserisci un carattere" << endl;
    cin >> a;
    cout << "Inserisci un altro carattere" << endl;
    cin >> b;

    a=a ^ b;
    b=b ^ a;
    a=a ^ b;

    cout << a << " " << b<< endl ;
 }