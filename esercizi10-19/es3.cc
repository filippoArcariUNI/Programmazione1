#include <iostream>
using namespace std;

void stampaCaratteri(char a, char b){

    if (a<=b)
    {
        cout << a;
        stampaCaratteri(a+1,b);
        
    }
    
}

int main() {
    char a,b;
    cout << "Insersci 2 caratteri" << endl;
    cin >> a >> b;
    stampaCaratteri(a,b);
    cout << endl;
}