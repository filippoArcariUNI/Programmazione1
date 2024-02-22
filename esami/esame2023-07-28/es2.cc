#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <cassert>
using namespace std;

const int fprecision = 5;

struct list {
  double info;
  struct list * next;
};

void delete_list(list * & l) {
  while(l != NULL) {
    list * t = l;
    l = l->next;
    delete t;
  }
}

void print_list(list * l) {
  std::cout << "The list of taylor terms is: ";
  while(l != NULL) {
    std::cout << std::setprecision(fprecision) << l->info << ((l->next != NULL) ? " " : "");
    l = l->next;
  }
  std::cout << std::endl;
}

double factorial(int N) {
  double result = 1.0;
  for (int i = 2; i <= N; i++) {
    result *= i;
  }
  return result;
}

// Aggiungere qui sotto la dichiarazione della funzione da
// implementare
list * function(double x,int n,double p);
void functionHelper(list *& l,double x,int n,double P,double last, int i);
// Aggiungere qui sopra la dichiarazione della funzione da
// implementare


int main(int argc, char **argv) {
  int N = 10;
  double precision = 1e-10;
  double x = 0.0;

  if (argc == 2) {
    x = atof(argv[1]);
  } else if (argc == 3) {
    x = atof(argv[1]);
    N = atoi(argv[2]);
    assert(N > 0);
  } else if (argc == 4) {
    x = atof(argv[1]);
    N = atoi(argv[2]);
    precision = atof(argv[3]);
    assert(N > 0);
    assert(precision >= 0.0);
  } else {
    std::cerr << "Usage: " << argv[0] << " x [N [P]]" << std::endl;
    std::cerr << "x is a double\nN is an optional integer > 0\nP is an optional precision expressed as a double" << std::endl;
    exit(1);
  }

  std::cout << std::setprecision(fprecision) << "x = " << x << std::endl;
  std::cout << "N = " << N << std::endl;
  std::cout << std::setprecision(fprecision) << "precision = " << precision << std::endl;
  list * result = function(x, N, precision);
  print_list(result);
  if (result != NULL) {
    std::cout << std::setprecision(fprecision) << "function(" << x << ") = " << result->info << std::endl;
  }
  delete_list(result);
  return 0;
}

// Aggiungere qui sotto la definizione della funzione da
// implementare

void insertRec(list *&l, list *node, double value) {
    if (node != nullptr) {
        node->info = value;
        node->next = nullptr;

        if (l == nullptr) {
            l = node; 
        } else {
            if (l->next == nullptr) {
                l->next = node;
            } else {
                insertRec(l->next, node, value);
            }
        }
    } else {
        cout << "Error" << endl;
    }
}
void reverse(list * &head)
{
    if (head == nullptr || head->next == nullptr) {
        return;
    }
    list* tail = head;
    head = head->next;
    reverse(head);
    tail->next->next = tail; 
    tail->next = nullptr;
}

list * function(double x,int n,double p){
    list * root=nullptr;
    functionHelper(root,x,n,p,0,0);
    reverse(root);
    return root;
}

void functionHelper(list *& l,double x,int n,double P,double last, int i){
    int posizione=(2*i)+1;
    double  denominatore=factorial(posizione);
    double res=(pow(x,posizione)/denominatore)+last;
    // cout << res <<" " <<  pow(x,posizione)<< "/"<< denominatore<<" " << i<<endl;
    double erroreCorrente=0;
    if (last!=0)
    {
        erroreCorrente= (res-last);     
    }
    
    if (i>=n || erroreCorrente< P*last )
    {
        return;
    }else{
        list * t= new list;
        insertRec(l,t,res);
        functionHelper(l,x,n,P,res,i+1);
    }
    
}

// Aggiungere qui sopra la definizione della funzione da
// implementare
