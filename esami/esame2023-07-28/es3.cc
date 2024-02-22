#include <iostream>

// Includere qui la libreria da usare, i.e. stack.h o queue.h a
// seconda della richiesta
#include "stack.h"
// #include "queue.h"
using namespace std;
#define MAXSIZE 20

struct list {
  int node;
  struct list * next;
};

bool ** genera(const int N) {
  bool ** result = new bool * [N];
  for (int i = 0; i < N; i++) {
    result[i] = new bool[N]();
    for (int j = 0; j < N; j++) {
      result[i][j] = (bool)(rand()%2);
    }
  }
  return result;
}

void dealloca(bool * * & r, int N) {
  for(int i = 0; i < N; i++) {
    delete [] r[i];
  }
  delete [] r;
  r = NULL;
}

void print(bool ** G, int N) {
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      std::cout << G[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

void print(list * l) {
  std::cout << "Lista: ";
  while(l!=NULL) {
    std::cout << l->node << ((l->next != NULL) ? " " : "");
    l = l->next;
  }
  std::cout << std::endl;
}

void dealloca(list * l) {
  while(l!=NULL) {
    list * t = l;
    l=l->next;
    delete t;
  }
}

// Inserire qui sotto la dichiarazione di visita
list * visit(bool ** matrix,int n,int i);
// Inserire qui sopra la dichiarazione di visita


int main(int argc, char * argv[]) {
  unsigned s = unsigned(time(0));
  srand(s);
		//
		// Commentare la linea seguente per avere comportamento
		// non-deterministico
		//
		srand(1688544644);
  int N = rand()%MAXSIZE;
  bool **G = genera(N);
  int i = rand()%N;
  std::cout << "Grafo G["<< N << "][" << N << "]" << std::endl;
  print(G, N);
  list * res = visit(G,N,i);
  print(res);
  dealloca(G,N);
  dealloca(res);
}

// Inserire qui sotto la definizione di visita
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
void insertRec(list *&l, list *node, int value) {
    if (node != nullptr) {
        node->node = value;
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

list * visit(bool ** matrix,int n,int i){
    bool * visited=new bool[n];
    list * result=nullptr;
    Stack * stack=init();
    for (int i = 0; i < n; i++)
    {
        visited[i]=false;
    }
    push(stack,i);
    
    while (!isEmpty(stack))
    {
        int s=pop(stack);       
        if (!visited[s])
        {
            visited[s]=true;
            list* t= new list;
            insertRec(result,t,s);
            for (int j = 0; j < n; j++)
            {
                if (matrix[s][j])
                {
                    push(stack,j);
                }
                
            }
            
        }
        
    }
    quit(stack);
    reverse(result);
    return result;
}
// Inserire qui sopra la definizione di visita