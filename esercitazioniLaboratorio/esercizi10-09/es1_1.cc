#include <iostream>
using namespace std;

int main(){
 for (int i = 0; i <= 5; i++)
 {
    if (i==0 || i==5)
    {
        for (int j = 0; j <= 5; j++)
        {
            cout << " x " ;
        
        }  
        cout << endl;

    }else{
        for (int j = 0; j <= 5; j++)
        {
           if(j>0 && j<5){
            cout << " - ";
           }else{
            cout << " x ";
           }
        }  
        cout << endl;
    }
    
    
    
 }
 
}