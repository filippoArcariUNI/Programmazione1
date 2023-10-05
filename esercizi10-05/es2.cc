#include <iostream>
using namespace std;

int main(){
    int a,b;
    bool tuttoK=false;
    do{
    cout << "Inserisci 2 valori Numerici" << endl;
    cin >> a >> b;
        if (a>b)
        {
            tuttoK=true;
        }else if(a<0){
            tuttoK=true;
        }else if(b>127){
            tuttoK=true;
        }
        
    } while (tuttoK);
    for (int i = a; i < b; i++)
    {
        int max=(int)'~';
        int min=(int)'1';

        char c= (char)i+(max-min);
        cout << c << endl;
    }
    
    
    
}