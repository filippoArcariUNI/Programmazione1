#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Inserisici il numeor di cui vuoi sapere la tabellina"<< endl ;
    cin >> a;
    cout <<endl;
    int i=1;
    while (i<=10)
    {
        cout <<  a*i<< endl;
        i++;
    }
   
}