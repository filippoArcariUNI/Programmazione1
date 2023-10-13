#include <iostream>
using namespace std;

int divisione(int *dividendo, int *divisore ,int &resto=0x0, int ris=0){
    int ris=0

    if (*dividendo>*divisore)
    {
        if ((*dividendo-*divisore)=>0)
        {
            *dividendo-=*divisore;
            divisione(&dividendo,&divisore)
            ris++;

        }else{
            unsigned int r= *dividendo-*divisore
            &resto = r;
        }
        
    }
    return ris;
}

int main(){
    int dividendo, divisore;
    int resto =0;
    cout << "inserisci il dividendo" << endl;
    cin >> dividendo;
    cout << "inserisci il divisore" << endl;
    cin >> divisore;
    
    cout << "la divisione fa:" <<  int divisione(&dividendo , &divisore , &resto) << " resto: " << resto << endl  

}