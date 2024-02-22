#include <iostream> 
using namespace std;

bool isPrimo(int a,int counter=2){
    if (a==counter)
    {
        return true;
    }else{
        if (a%counter==0)
        {
            return false;
        }else{
            isPrimo(a,counter+1);
        }
        
    }
    
}
void fattorizza(int a,int contatore=2){
    if (a>1)
    {
        if (isPrimo(contatore) && a%contatore==0){
        cout << contatore << " ";
        fattorizza(a/contatore ,contatore);
    }else{

        fattorizza(a,contatore+1);
    }
    }
 
}

int main(){
    int a;
    cout << "Inserisci un Numero non Primo" << endl;
    cin >> a ;
    fattorizza(a);
    cout << endl;
}