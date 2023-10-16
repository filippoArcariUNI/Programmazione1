#include <iostream> 
#include <chrono>
using namespace std;



int FactRecursive(int n){
    int ris=0;
    if (n<=0)
    {
        ris=1;
      
    }else{
        ris=n*FactRecursive(n-1);
        n--;
    }

    return ris;
}

int FactItertivo(int n){
    int ris=1;
    for (int i = 0; i < n; i++)
    {
        ris*=n-i;
    }
    

    return ris;
}

int main(){
    
    int n;
    cout << "Inserisci un numero:" << endl ;
    cin >> n;
    chrono:: steady_clock::time_point startr= chrono::steady_clock::now();
    cout <<"Il Fattoriale di "<< n << " è:"<< FactRecursive(n) << endl;
    chrono::steady_clock :: time_point endr= chrono::steady_clock::now();
    chrono::duration <double>  timeRec = chrono::duration_cast<chrono::duration<double>>(endr-startr);
    cout << "La funzione Ricorsiva ha impiegato " << timeRec.count() << " millisecondi" << endl;


    chrono::steady_clock :: time_point starti=chrono::steady_clock::now();
    cout <<"Il Fattoriale di "<< n << " è:"<< FactItertivo(n) << endl;
    chrono::steady_clock :: time_point endi=chrono::steady_clock::now();
    chrono:: duration <double>timeIter= chrono::duration_cast<chrono::duration<double>> (endi-starti);
    cout << "La funzione Iterativa ha impiegato " << timeIter.count() << " millisecondi" << endl;

    
}