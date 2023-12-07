#include <iostream> 
#include <cstdlib>
using namespace std;
void riempiArray(int arr[],int dim){
    for (int i = 0; i < dim; i++)
    {
        arr[i]=rand()%10;
    }
    
}

void stampaArray(const int arr[],int dimensione){

    for (int i = 0; i < dimensione; i++)
    {
        cout << arr[i] << "  ";
    }

}
bool inPattern(int * testo,int * pattern, int dimTesto,int dimPattern){
    int j=0;
    for (int i = 0; i < dimTesto; i++)
    {
        
        if (testo[i]==pattern[j])
        {
            j++;

        }else{
            j=0;
        }
        
        if (dimPattern==j)
        {
            return true;
        }
        
    }
    return false;
}

int main(){
    const int dimPattern=2;
    const int dimTesto=10;
    int testo[dimTesto];
    int pattern[dimPattern];
    srand(time(NULL));
    riempiArray(testo,dimTesto);
    riempiArray(pattern,dimPattern);

    stampaArray(testo,dimTesto);
    cout << endl;
    stampaArray(pattern,dimPattern);
    cout << endl;

    cout << "inPattern: " << inPattern(testo,pattern,dimTesto,dimPattern) << endl;

}