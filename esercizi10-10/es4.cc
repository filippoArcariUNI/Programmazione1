#include <cstdlib>
#include <iostream>
using namespace std;

int contaDadi(){
    
    int contatore=0;
    for (int i = 0; i < 7; i++)
    {
        int random_number = rand() % 6 + 1;
        if (random_number==1)
        {
        contatore++;
        }
         
    }
    
    return contatore;

}

bool numeroCorretto(int n,int contatore){
    bool ok=false;
    if (n==contatore)
    {
        ok=true;
    }
    return ok;
}

int main(){
    int numScelto;
    srand(time(NULL));
    cout << "In quanti dadi é  uscito 1?" << endl;
    cin >> numScelto;

    if (numeroCorretto(numScelto,contaDadi()))
    {
        cout << "Esatto, il numero è: " << numScelto << endl;
    }else{
        cout << "Errato, il numero era: " << contaDadi() << endl;

    }
    
}