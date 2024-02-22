#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void stampaArray(int * arr,int dim){

    for (int i = 0; i < dim; i++)
    {
        cout << arr[i]<<" ";
    }
}
void rimepiArray(int * arr, int dim){
    for (int i = 0; i < dim; i++)
    {
       arr[i]=rand()%10;
    }
}
bool isInPattern(int * arr, int dimArr, int * pattern,int dimPattern){
    int j=0;
    for (int i = 0; i < dimArr; i++)
    {
        if (arr[i]==pattern[j])
        {
            j++;
        }else{
            j=0;
        }
        if (j==dimPattern)
        {
            return true;
        }
        
    }
    return false;
}
int main(){
    const int dimPadre=20;
    const int dimFiglio=4;
    int padre[dimPadre];
    int figlio[dimFiglio];
    srand(time(NULL));
    rimepiArray(padre,dimPadre);
    rimepiArray(figlio,dimFiglio);
    stampaArray(padre,dimPadre);
    cout << endl;
    stampaArray(figlio,dimFiglio);
    cout << endl;
    if (isInPattern(padre,dimPadre,figlio,dimFiglio))
    {
        cout <<"E' figlio"<< endl;
    }else{
        cout <<"NON è figlio"<< endl;

    }
    
    



}