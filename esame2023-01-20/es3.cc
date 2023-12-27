#include <iostream>
#include "pila.h"

using namespace std;

int * collidiAsteroidi(int asteroidi[], int numeroAsteroidi, int & numeroAsteroidiRimasti);

int main() {
    
    // Potete modificare l'array di asteroidi (e la sua
    // dimensione) per testare la vostra soluzione
    int asteroidi [] = {3,6,-3};
    int numeroAsteroidi = 3;


    int numeroAsteroidiRimasti;
    int * asteroidiRimasti = collidiAsteroidi(asteroidi, numeroAsteroidi, numeroAsteroidiRimasti);


    // La stampa dell'array dinamico degli
    // asteroidi rimasti avviene nel main
    for (int i = 0; i < numeroAsteroidiRimasti ; i++) {
        cout << asteroidiRimasti[i] << " ";
    }
    cout << endl;

    // La deallocazione dell'array dinamico 
    // degli asteroidi rimasti avviene nel main
    delete[] asteroidiRimasti;
}


// Implementare la funzione sottostante come da consegna:
// - ritornare un'array di interi allocato dinamicamente che 
//   contenga lo stato degli asteroidi dopo tutte le collisioni
// - assegnare a 'numeroAsteroidiRimasti' il numero di elementi 
//   nell'array ritornato
int * collidiAsteroidi(int asteroidi[], int numeroAsteroidi, int & numeroAsteroidiRimasti) {
    init();
    for (int i = 0; i < numeroAsteroidi; i++)
    {
        push(asteroidi[i]);
    }

     
    for (int i = 0; i < numeroAsteroidi; i++)
    {
        if (asteroidi[i]>0)
        {
            for (int  j = 0; j < numeroAsteroidi; j++){
                
                if (i!=j)
                {
                    cout<< asteroidi[i]<< " "<<asteroidi[j]<< endl;
                    if (asteroidi[i]==asteroidi[j] || asteroidi[i]==-1*asteroidi[j] || -1*asteroidi[i]==asteroidi[j])
                    {
                        asteroidi[i] = 0;
                        asteroidi[j] =0;
                    }else if (asteroidi[i]>asteroidi[j]){
                        asteroidi[j]=0;
                    }else{
                        asteroidi[i]=0;
                    }
                }
                
                
            }
            
        }else{
            for (int k = 0; k < i; k++)
            {
                if (i!=k)
                {
                    if (asteroidi[i]==asteroidi[k] || asteroidi[i]==-1*asteroidi[k] || -1*asteroidi[i]==asteroidi[k])
                    {
                        asteroidi[i] = 0;
                        asteroidi[k] =0;
                    }else if (asteroidi[i]>asteroidi[k]){
                        asteroidi[k]=0;
                    }else{
                        asteroidi[i]=0;
                    } 
                }
                
            }  
        }          
    }
    numeroAsteroidiRimasti=0;

    for (int  i = 0; i < numeroAsteroidi; i++)
    {
        if (asteroidi[i]!=0)
        {
            numeroAsteroidiRimasti++;
        }
        
    }
    int *newAsteroidi=new int[numeroAsteroidiRimasti];
    int t=0;
    for (int i = 0; i < numeroAsteroidi; i++)
    {
        if (asteroidi[i]!=0)
        {
            newAsteroidi[t]=asteroidi[i];
            t++;
        }
        
    }
    
    return newAsteroidi;
       
}
