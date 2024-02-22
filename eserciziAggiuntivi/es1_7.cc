#include <iostream>
using namespace std;

int main(){
   int n = 1;

    
    if(*(char *)&n == 1) {
        cout << "Littel endian"<<endl;
    } else {
        cout << "big endian"<<endl;
        
    }  
    
    


}