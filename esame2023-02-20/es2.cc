#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
#define MAXVALUE 100
#define MAXSIZE 100

// NON MODIFICARE IL CODICE SOTTO FINO A "NON MODIFICARE IL CODICE SOPRA"
struct list {
  int info;
  list * next;
};

struct tree {
  int info;
  tree * left;
  tree * right;
};

void insert(tree * & result, const int num) {
		if (result == NULL) {
				result = new tree;
				*result = {num, NULL, NULL};
		} else if (result->info > num) {
				insert(result->left, num);
		} else {
				insert(result->right, num);
		}
}

tree * crea_tree(const int num) {
		tree * result = NULL;
		for(int i = 0; i < num; i++) {
				insert(result, rand()%MAXVALUE);
		}
		return result;
}

void print_tree(const tree * root){
		if (root != NULL) {
				print_tree(root->right);
				std::cout << " " << root->info;
				print_tree(root->left);
  }
}

void delete_tree(tree * & root) {
  if (root != NULL) {
    delete_tree(root->left);
    delete_tree(root->right);
    delete root;
    root = NULL;
  }
}

void print_array(const int l[], const int l_size) {
  for(int i = 0; i < l_size; i++)
    std::cout << " " << l[i];
  std::cout << std::endl;
}

// NON MODIFICARE IL CODICE SOPRA

// Add hereafter the declaration of estrai
void estrai(tree *& root, int  *& l1, int  & size1,int *&l2, int &  size2);

// Add here above the declaration of estrai

// NON MODIFICARE IL MAIN
int main(int argc, char ** argv) {
  srand(unsigned(time(0)));
		//
		// Commentare la linea seguente per avere comportamento
		// non-deterministico
		//
		srand(0);
		tree * root = crea_tree(rand()%MAXSIZE);
		std::cout << "Initial tree content: ";
		print_tree(root); std::cout << std::endl;
  int * l1;
  int l1_size;
  int * l2;
  int l2_size;
  estrai(root, l1, l1_size, l2, l2_size);
  delete_tree(root);
		std::cout << "L1 =";
  print_array(l1, l1_size);
		std::cout << "L2 =";
  print_array(l2, l2_size);
  delete [] l1;
  delete [] l2;
}
// NON MODIFICARE IL MAIN

// Add hereafter the definition of estrai
int contaPari(tree * root){
    if (root==nullptr)
    {
        return 0;
    }else{
      if ((root->info%2)==0)
        {
            return 1 + contaPari(root->left)+contaPari(root->right);
        }else{
            return 0 + contaPari(root->left)+contaPari(root->right);
        } 
    }
}

int contaDispari(tree * root){
    if (root==nullptr)
    {
        return 0;
    }else{
      if ((root->info%2)==0)
        {
            return 1 + contaDispari(root->left)+contaDispari(root->right);
        }else{
            return 0 + contaDispari(root->left)+contaDispari(root->right);
        } 
    }
}
void estrai_helper(tree *& root, int *& pari,int  *&dispari,int & i1,int &  i2){
    if (root==nullptr)
    {
      return;
    }else{
        estrai_helper(root->left,pari,dispari,i1,i2);
        if ((root->info%2)==0)
        {
            pari[i1++]=root->info;
            
        }else{
            dispari[i2++]=root->info;
        }
        estrai_helper(root->right,pari,dispari,i1,i2);
        
    }
    
    

    
}
void estrai(tree * & root, int *& l1 ,int &  size1,int  *&l2, int &  size2){
    if (root!=nullptr)
    {
        size1=contaPari(root);
        size2=contaDispari(root);
        l1=new int[size1];
        l2 =new int[size2];
        int i1=0;
        int i2=0;
        estrai_helper(root,l1,l2,i1,i2);
    }
    
}
// Add here above the definition of estrai