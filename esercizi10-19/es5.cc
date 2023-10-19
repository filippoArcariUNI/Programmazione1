#include <iostream>
using namespace std;

int paletto1[5]={5,4,3,2,1};
int paletto2[5]={0,0,0,0,0};
int paletto3[5]={0,0,0,0,0};

void sposta(int* n1,int* n2){

    int t=*n1;
    *n2=*n1;
    *n2=t;

}
void stampatorreHanoi(int i=0){
    
    for (int i = 0; i < 5; i++)
    {
        cout<< paletto1[i];
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout<< paletto2[i];
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout<< paletto3[i];
    }
    cout << endl;
    
     
}

void risolviHanoi(int i=0){

    //Sposto a dx
    if (paletto3[5]!=1){
        if (paletto1[i]<paletto2[i]){
            sposta(&paletto1[i],&paletto2[i]);
        }
        if (paletto2[i]<paletto3[i]){
            sposta(&paletto2[i],&paletto3[i]);
        } 
        //Sposto a sx
        if (paletto1[i]>paletto2[i]){
            sposta(&paletto1[i],&paletto2[i]);
        }
        if (paletto3[i]>paletto2[i]){
            sposta(&paletto3[i],&paletto2[i]);
        }
        if (i>5)
        {
            cout << "=============" << endl;
            stampatorreHanoi();
            i=0;
            risolviHanoi(i);
        }else{
            cout << "=============" << endl;
            stampatorreHanoi();
            risolviHanoi(i);
        }
        
    }
   
}






int main(){

risolviHanoi();

}