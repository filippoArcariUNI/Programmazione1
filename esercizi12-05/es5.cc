#include <iostream>
using namespace std;

bool isPalindormaHelper(int * arr, int i,int dim){
    bool pal=true;
    if (i>=dim)
    {
        return pal;
    }else{
        if (arr[i]!=arr[dim])
        {
            pal=false;
            return false;
        }else{
            return isPalindormaHelper(arr,i+1,dim-1);
        }
        
    }
    
}

bool isPalindorma(int * arr,int dim ){
   return isPalindormaHelper(arr,0,dim);
}

int main(){
    int dim;
    cout << "Insersci la dimensione" << endl;
    cin>> dim;
    int * arr=new int[dim];
    for (int  i = 0; i < dim; i++)
    {
        cin >> arr[i];
    }
    cout << "isPalindorma: " << isPalindorma(arr,dim-1) << endl;
    
}

