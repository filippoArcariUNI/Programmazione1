#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(){
    int  decimale=0;
    string binario;
    cout << "Inserisci un Numero Binario" << endl;
    cin >> binario;

    int lunghezza=binario.length();
    for (int i = 0; i <lunghezza; i++)
    {
        char c= binario[i];
        if (c=='1')
        {
            int pwr=1;
            for (int j = 0; j < lunghezza-i-1; j++){
                pwr*=2;
            }
            decimale+=pwr;
        }
        
       
        
    }
    cout << "Il Numero in Decimale è: " << decimale << endl ;
}