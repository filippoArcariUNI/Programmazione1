#include <iostream> 
using namespace std;

int max(int a=0 ,int b=0, int c=0, int d =0 ,int e=0){

}

int main(){
    int a,b,c,d,e;
    int counter=0;

    do
    {
        cout << "inserisci Un numero, Inserisci A per uscire "<< endl;
        if (counter==0)
        {
           cin << a;
        }
        if (a=='A')
        {
            break;
        }
        
        
        counter++;
    } while (counter<=5);

    cout << "il massimo é :" << max(a,b,c,d,e)<<endl;
    
}