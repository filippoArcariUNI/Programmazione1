#include <iostream>
using namespace std;

int  triangoloTartaglia(int riga, int colonna){
    if (colonna==0 || colonna==riga)
    {
        return 1;
    }else{
       return triangoloTartaglia(riga-1,colonna-1)+triangoloTartaglia(riga-1,colonna);
    }

    
}
void printSpace(int space){
    if (space<=0)
    {
        return;
    }else{
        cout << " ";
        printSpace(space-1);
    }
    
}
void printTriangolo(int n, int i , int j){
    if (n==i)
    {
        cout << triangoloTartaglia(0,0);
    }else if (j<=i)
    {
        printSpace(n-i);
        cout << triangoloTartaglia(i,j)<< " ";
        printTriangolo(n,i,j+1); 
    }else{
        cout << endl;
        printTriangolo(n,i+1,0); 
        
    }
    
    
}

int main(){
    int h;
    cout << "Inserisci la riga: ";
    cin >> h;
    printTriangolo(h,0,0);
    return 0;
}