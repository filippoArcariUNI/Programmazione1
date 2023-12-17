#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <ctime>
using namespace std;
typedef struct List {
		int info;
		struct List * next;
} List;

const int MAXNUM = 50;

void do_print(const List *l);
void stampa_List(const List * l, const char * prefix);
List * create_random_List(int i = 0);
void dealloca(List * & l);
int conta(List  * t);

// ---------------------------------------------------------------
// Inserire qui sotto la dichiarazione della funzione compute_List
void compute_List(List *, List*& ,List *&);
void compute_List_Aux(List *l1, List*& l2,List *& l3);
// Inserire qui sopra la dichiarazione della funzione compute_List
// ---------------------------------------------------------------

// NON modificare il main
int main(int argc, char ** argv) {
		// Non modificare il main
		if (argc != 1) {
				std::cerr << "Usage: " << argv[0] << std::endl;
				exit(1);
		}

		int seed = 0;
		// Inizializzare random_seed a true per un comportamento random
		bool random_seed = false;
		if (random_seed)
				seed = time(NULL);

		srand(seed);
		List * l = create_random_List();
		stampa_List(l, "Lista iniziale");
		List * l1, *l2;
		compute_List(l, l1, l2);
		stampa_List(l1, "Lista l1");
		stampa_List(l2, "Lista l2");
		dealloca(l);
		dealloca(l1);
		dealloca(l2);
}

// ---------------------------------------------------------------
// Inserire qui sotto la definizione della funzione compute_List
void compute_List(List *l1, List*& l2,List *& l3){

    if (l1!=nullptr && l2!= nullptr && l3!= nullptr)
   {
        compute_List_Aux(l1,l2,l3);   
   }
    
}
int conta(List  * t){  
    if (t==nullptr)
    {   
        return 0;
    }else{
		return 1+ conta(t->next);
    }
    
}
void insert(List *& l, List * node, int value){
	node->info=value;
	node->next=nullptr;
    if (l==nullptr)
    { 
		l=node;
    }else{
		l->next=node;
	}
	stampa_List(l,"prova");
}

void compute_List_Aux(List *l1, List*& l2,List *& l3){
	List * x=new List;
    if (l1->next==nullptr)
    {
		int lenghtL2=conta(l2);
        int lenghtL3=conta(l3);
		insert(l2,x,lenghtL2);
		insert(l3,x,lenghtL3);
       return;
    }else{
        
        if ((l1->info%2)==0 && !(l1->info%3)==0)
        {
			
            insert(l2,x,l1->info);
			cout.flush();
			compute_List_Aux(l1->next,l2,l3);
        }else if ((l1->info%3)==0)
		{
            insert(l3,x,l1->info);
			compute_List_Aux(l1->next,l2,l3);
		}else{
			compute_List_Aux(l1->next,l2,l3);
		}
           
  }
    

}
// Inserire qui sopra la definizione della funzione compute_List
// ---------------------------------------------------------------

// ---------------------------------------------------------------
// NON MODIFICARE IL CODICE SOTTOSTANTE
// ---------------------------------------------------------------
// Non modificare questa funzione
void do_print(const List *l) {
		if (l != NULL) {
				std::cout << " \"" << l->info << "\"";
				do_print(l->next);
		}
}
// Non modificare questa funzione
void stampa_List(const List * l, const char * prefix) {
		std::cout << prefix << " :";
		do_print(l);
		std::cout << std::endl;
}

// Non modificare questa funzione
List * create_random_List(int i) {
		List * res = NULL;
		if (i < MAXNUM) {
				res = new List{rand() % MAXNUM, create_random_List(++i)};
		}
		return res;
}

// Non modificare questa funzione
void dealloca(List * & l) {
		if (l != NULL) {
				List * n = l;
				dealloca(l->next);
				delete n;
		}
}
