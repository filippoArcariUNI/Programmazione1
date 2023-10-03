#include <iostream>
using namespace std;

int main(){
    int h;
    cout  << "Inserisci l' altezza del triangolo "<<endl;
    cin >> h;
    for (int i = 0; i < h  ; i++)
    {
        
        
        for (int j = 0; j < h; j++)
        {
            if (j<(h+1)/2 || j>(h+1)/2)
            {
            cout << " ";
            }else{
            cout << "*";
            }
        }
        cout << endl;
        
    }
    
}