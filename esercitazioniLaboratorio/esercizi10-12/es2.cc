#include <iostream>
using namespace std;

int divisione(int *dividendo, int *divisore ,int & resto,int risultato){
    int ris=risultato;
    int fDiviendo=*dividendo;
    int fDivisore=*divisore;

    if (fDiviendo>=fDivisore)
    {
        if ((fDiviendo-fDivisore)>=0)
        {
            fDiviendo-=fDivisore;
            ris++;
            divisione(&fDiviendo,&fDivisore,resto,ris);

        }
        
    }else{
            unsigned int r= fDiviendo;
            resto = r;
            return ris;
        }
}

int main(){
    int dividendo, divisore;
    int resto =0;
    int risultato=0;
    
    cout << "inserisci il dividendo" << endl;
    cin >> dividendo;
    cout << "inserisci il divisore" << endl;
    cin >> divisore;
    
    cout << "la divisione fa: " <<  divisione(&dividendo , &divisore ,resto,risultato) << " resto: " << resto << endl ; 

}