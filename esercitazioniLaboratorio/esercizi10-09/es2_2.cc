#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int  j = 1; j <= 5; j++)
        {
            if (((j+i)%2==0) || (j==3)  || (i==3))
            {
                cout<< " x ";
            }else{
                cout << " - ";
            }
        }
            cout << endl ;
        
        
    }
    
}