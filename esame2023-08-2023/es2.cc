#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <cassert>
using namespace std;
// 18:19 - 18:27

const int fprecision = 5;

struct list {
  int info;
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
  std::cout << "The list of terms is: ";
  while(l != NULL) {
    std::cout << l->info << ((l->next != NULL) ? " " : "");
    l = l->next;
  }
  std::cout << std::endl;
}

// Aggiungere qui sotto la dichiarazione della funzione da
// implementare
list * crea_lista(int n);

// Aggiungere qui sopra la dichiarazione della funzione da
// implementare


int main(int argc, char **argv) {
  int N;

  if (argc == 2) {
    N = atoi(argv[1]);
  } else {
    std::cerr << "Usage: " << argv[0] << " N ]" << std::endl;
    std::cerr << "N is an integer > 0" << std::endl;
    exit(1);
  }

  std::cout << "N = " << N << std::endl;
  list * result = crea_lista(N);
  print_list(result);
  delete_list(result);
  return 0;
}

// Aggiungere qui sotto la definizione della funzione da
// implementare
void insertRec(list *&l, list *node, int value) {
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
void crea_lista_helper(list *& root,int n, int i){
    if (i>=n)
    {
        return;
    }else{
        int result=(i*(i+1))/2;
        list * t= new list;
        insertRec(root,t,result);
        crea_lista_helper(root,n,i+1);
    }
    
}
list * crea_lista(int n){
    list * root= nullptr;
    crea_lista_helper(root,n,0);
    reverse(root);
    return root;
}

// Aggiungere qui sopra la definizione della funzione da
// implementare
