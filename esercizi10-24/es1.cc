#include <iostream>
using namespace std;

int main(){
    int arr[10];
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        arr[i]=rand() % 10 + 1; 
    }

    for (int i = 0; i < 10; i++)
    {
       cout << arr[i]<< "  " ;
    }
    cout << endl;
}