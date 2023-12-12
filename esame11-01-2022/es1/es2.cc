#include <iostream>
#include <cstdlib>
#include <cassert>
using namespace std;
struct node {
		char info;
		node * next;
};

void dealloca(node *& s) {
		while(s != NULL) {
				node * t = s;
				s = s->next;
				delete t;
		}
}

void stampa_lista(const char * testo, node * s) {
		std::cout << testo;
		for( ; s!= NULL; s=s->next) {
				std::cout << " " << s->info;
		}
		std::cout << std::endl;
}

// Scrivere qui sotto la dichiarazione della funzione compute_lists ed
// eventuali funzioni accessorie
void compute_lists(char * str, node *&s1,node *&s2);
char nToZ(char c);
char aToM(char c);
// Scrivere qui sopra la dichiarazione della funzione compute_lists ed
// eventuali funzioni accessorie

int main(int argc, char **argv) {
		if (argc != 2) {
				std::cout << "Usage: " << argv[0]
														<< " \"stringa di caratteri\"" << std::endl;
				exit(1);
		}
		node * s1, * s2;
		std::cout << "La stringa da analizzare e': " << argv[1] << std::endl;

		compute_lists(argv[1], s1, s2);

		stampa_lista("Lista s1:", s1);
		stampa_lista("Lista s2:", s2);
		dealloca(s1);
		dealloca(s2);
}

// Scrivere qui sotto la definizione della funzione compute_lists ed
// eventuali funzioni accessorie
void compute_lists( char * str,node * & s1, node * & s2) {
	s1=nullptr;
	s2=nullptr;
	if (*str=='\0')
	{
		return;
	}else{
		node * x=new node;
		if (*str>='A' && *str<='M')
		{
			x->info=aToM(*str);
			x->next=nullptr;
			if (s1==nullptr)
			{
			
				s1=x;
			}else{
				s1->next=x;
			}
			compute_lists(++str,s1->next,s2);
		}else if(*str>='N' && *str<='Z'){
			
			x->info=nToZ(*str);
			x->next=nullptr;
			if (s2==nullptr)
			{
			
				s2=x;
			}else{
				s2->next=x;
			}
			compute_lists(++str,s1,s2->next); 
		}
		
		
	}
	
	
}

char aToM(char c){
	c = 'm' - c + 'a';
	c = c + 'A' - 'a';
	return c;
}

char nToZ(char c){
	c = 'z' - c + 'n';
	c = c + 'A' - 'a';
	return c;
}
// Scrivere qui sopra la definizione della funzione compute_lists ed
// eventuali funzioni accessorie
