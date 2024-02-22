#include <iostream>
#include <cstdlib>
using namespace std;

int vincente(int n1,int n2){
    if (n1>n2)
    {
        return 1;
    }
   if (n1==n2)
    {
        return -1;
    }
    
    return 0;
}
void ordina(int * n1,int * n2 , int *n3){
    while (*n1<*n2 || *n2<*n3)
    {
        if (*n1<*n2)
        {
          int t=*n2;
        *n2=*n1;
        *n1=t; 
        }
        if (*n2<*n3)
        {
        int j=*n3;
        *n3=*n2;
        *n2= j;
        }
    
        
    }

}

int main(){
    int att1,att2,att3,dif1,dif2,dif3;
    int counter=0;
    int parCounter=0;
    int dadi=3;
    srand(time(NULL));

    for (int i = 0; i < 3; i++)
    {
     att1 = rand() % 6 + 1;
     att2 = rand() % 6 + 1;
     att3 = rand() % 6 + 1;
    }
    
    for (int i = 0; i < 3; i++)
    {
     dif1 = rand() % 6 + 1;
     dif2 = rand() % 6 + 1;
     dif3 = rand() % 6 + 1;
    }


    ordina(&att1,&att2,&att3);
    ordina(&dif1,&dif2,&dif3);

    if (vincente(att1,dif1)!=-1)
    {
        counter += vincente(att1,dif1);
    }
    
     if (vincente(att2,dif2)!=-1)
    {
        counter += vincente(att2,dif2);
    }
     if (vincente(att3,dif3)!=-1)
    {
        counter += vincente(att3,dif3);
    }

    // conteggio Pareggi
    if (vincente(att1,dif1)==-1)
    {
        parCounter ++;
    }
    
     if (vincente(att2,dif2)==-1)
    {
        parCounter ++;
    }
     if (vincente(att3,dif3)==-1)
    {
        parCounter++;
    }

    
    

 
    

    cout << "Ha vinto l' attacante " << counter << " volte, ci sono stati " <<  parCounter<< " pareggi e la difesa ha vinto "  << dadi-parCounter-counter <<" volte "<<    endl;
    



}