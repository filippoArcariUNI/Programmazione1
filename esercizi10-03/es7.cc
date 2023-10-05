#include <iostream>
#include <cstdlib>


using namespace std;


int main(){
int selto;
srand(time(NULL));
int random_number = rand() % 10 + 1;
cout << random_number;
   do
   {
   cout << "Inserisci un numero, prova a indovianre cosa ho pensato" << endl;
    cin >> selto;
    if (random_number!=selto)
    {
    if (selto>random_number)
    {
        cout << "Numero troppo Alto, riprova" << endl;
    }else{
        cout << "Numero troppo Basso, riprova" << endl;
    }  
    }
    
    
   } while (random_number!=selto);
   cout << "Bravo, Hai Indovinato . Il numero che ho pensato è: "<< selto << endl;
}