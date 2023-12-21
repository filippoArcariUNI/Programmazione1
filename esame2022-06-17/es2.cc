#include <iostream>
#include <string>

using namespace std;

// Add hereafter the declaration of compute_sum
int dimNumber(int n){
    if (n/10 == 0) 
        return 1; 
    return 10 * dimNumber(n / 10); 
}
int funzione_helper(int n, int first ,int counter){
    if (n==0)
    {
      // cout << counter<< " ";
        return counter;
    }else{
        
        int dim=dimNumber(n);
        first=n/dim;
        n%=dim;
        counter+=first;
        funzione_helper(n,first,counter);
    }
    
}

int compute_sum(int);

// Add here above the declaration of compute_sum

int main(int argc, char ** argv) {
  if (argc != 2) {
    cerr << "Usage: " << argv[0] << " int " << endl;
    exit(1);
  }

  int num;
  try {
    string ss(argv[1]);
    num = stoi(ss);
  } catch (out_of_range) {
    cerr << "Unable to convert the given string to an integer" << endl;
    cerr << "String of the given number = " << argv[1] << endl;
    cerr << "Converted integer = " << num << endl;
    exit(1);
  }
  if (0 > num) {
    cerr << "Expecting an integer greater or equal to 0" << endl;
    exit(1);
  }

  cout << "The initial integer is: " << num << endl;
  cout << "The value of compute_sum(" << num << ") = " << compute_sum(num) << endl;
}


// Add hereafter the definition of compute_sum
int compute_sum(int n){
 
    if (n<10)
    {
      return n;
    }else{
      int sommaNumeri= funzione_helper(n,0,0);
      //  cout << sommaNumeri << " ";
      if (sommaNumeri>=10 && (sommaNumeri%2)==0)
      {
        sommaNumeri+=10;
      }else if (sommaNumeri>=10 && (sommaNumeri%2)!=0)
      {
        sommaNumeri+=1;
      }
      // cout << sommaNumeri << endl;
      compute_sum(sommaNumeri);
    }
    
}
// Add here above the definition of compute_sum
