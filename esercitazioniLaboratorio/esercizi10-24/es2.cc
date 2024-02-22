#include <iostream>
using namespace std;

int main(){
    int arr[10];
    int arr1[10];
    srand(time(NULL));
    int count=0;

    for (int i = 0; i < 10; i++)
    {
        arr[i]=rand() % 10 + 1; 
    }
    for (int i = 0; i < 10; i++)
    {
        arr1[i]=rand() % 10 + 1; 
    }
    cout << "============="<< endl ;
    for (int i = 0; i < 10; i++)
    {
       cout << arr[i]<< "  " ;
    }
    cout << endl;
    cout << "============="<< endl ;
    for (int i = 0; i < 10; i++)
    {
       cout << arr1[i]<< "  " ;
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==arr1[i])
        {
            count++;
        }
        
    }
    cout << endl;

    cout << "Gli elementi uguali allo stesso indice sono --> " << count << endl;
}