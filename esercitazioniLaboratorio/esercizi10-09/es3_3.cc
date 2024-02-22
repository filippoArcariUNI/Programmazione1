#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int  j = 1; j <= 5; j++)
        {
            if ((i==j)|| (i==6-j))
            {
                cout<< " o ";
            }else{
                if(i>j){
                    cout <<" - ";
                }else{
                    cout<< " H ";
                }
            }


        }
            cout << endl ;
        
        
    }
    
}