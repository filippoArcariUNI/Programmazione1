#include <iostream>
#include <cstdlib>
using namespace std;

bool vincente(int n1,int n2){

}
void ordina(int * n1,int * n2 , int *n3){
    while (*n1>*n2 && *n2>*n3)
    {
        int t=*n1;
        *n2=*n1;
        *n2=t;

        int j=*n3;
        *n3=*n2;
        *n2= j;
    }
    

}

int main(){
    int att1,att2,att3,dif1,dif2,dif3;
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


}