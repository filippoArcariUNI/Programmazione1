#include <iostream>
using namespace std;

int main(){
    int n,npre=0,npre2=1;
    int risultato=2;
    bool cambio;
    cout << "Inserisci un numero" << endl;
    cin >> n;

    for (int  i=1; i < n; i++)
    {
        if (i==1)
        {
          cout << npre<< endl;
          cout << npre2<< endl;
          cout << npre2<< endl;
          npre =npre2;
          cout << endl ;

        }else
        {
          risultato=npre+npre2;
          if (cambio)
          {
            npre=risultato;
            cambio=false;
          }else{
             npre2=risultato;
            cambio=true;
          }
          cout << risultato << endl;
        }
        
    }
    return 0;
    
}