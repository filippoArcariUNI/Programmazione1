#include <iostream>
using namespace std;

int main(){
    int h;
    cout  << "Inserisci l' altezza del triangolo "<<endl;
    cin >> h;
    for (int i = 0; i < h*2  ; i++)
    {
        if (i%2==0)
        {  
        for (int j = 0; j < h*2-1; j++)
        {
            if (j<h-1-(i/2) || j>h+(i/2)-1)
            {
                cout << "-";
            }else{

            cout << "*";
            }
            
            
        }
        cout << endl;
        }
    }
    
}