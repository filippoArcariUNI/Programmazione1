#include <iostream>
using namespace std;

int main(){

    for (char i = 'A' ; i <= 'Z'; i++)
    {
        char  c=(char)(i+('a'-'A'));
        cout << c << "-->" << (int)i <<endl;
    }
    return 0;
}
    
