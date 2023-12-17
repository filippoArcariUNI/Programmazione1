#include <iostream>
#include <cstdlib>

using namespace std;

// Scrivere qui sotto la dichiarazione e definizione della funzione "funzione"

int dimNumber(int n){
    if (n/10 == 0) 
        return 1; 
    return 10 * dimNumber(n / 10); 
}
int funzione_helper(int n, int first,int second ,int counter){
    if (n==0)
    {
        return counter;
    }else{
        
        int dim=dimNumber(n);
        first=n/dim;
        n%=dim;
        
        if (first==second)
        {
            counter++;
        }
        funzione_helper(n,first,first,counter);
       
    }
    
}
int funzione(int n){
    cout << endl;
    int res=funzione_helper(n,0,0,0);
    return res;
}


// Scrivere qui sopra la dichiarazione e definizione della funzione "funzione"

int main(int argc, char ** argv) {
  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " <positivenum> " << std::endl;
    exit(1);
  }
  int n = atoi(argv[1]);
  std::cout << "The read string is: " << argv[1] << std::endl;
  std::cout << "The converted value is: " << n << std::endl;
  std::cout << "function("<< n << ") = " << funzione(n) << std::endl;
  return 0;
}