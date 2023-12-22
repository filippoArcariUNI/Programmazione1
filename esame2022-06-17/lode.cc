#include <iostream>

#define MAXVALUE 100
#define MAXSIZE 100
using namespace std;
typedef struct tree {
  int data;
  struct tree * left;
  struct tree * right;
} tree;

void insert(tree * & result, const int num) {
		if (result == NULL) {
				result = new tree;
				*result = {num, NULL, NULL};
		} else if (result->data > num) {
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

void print_tree(tree * root, int spazio = 0){
		if (root != NULL) {
				spazio++;
				print_tree(root->right, spazio);

				for (int i = 1; i < spazio; i++) std::cout<<"  ";
				std::cout<<root->data<<"\n";
				print_tree(root->left, spazio);
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

// Add hereafter the declaration of remove_element
tree * remove_element(tree *  root , int value);
// Add here above the declaration of remove_element

int main() {
		srand(unsigned(time(0)));
		//
		// Scommentare la linea seguente per avere comportamento
		// deterministico
		//
		srand(0);
		tree * root = crea_tree(rand()%MAXSIZE);

		std::cout << "Initial tree: " << std::endl;
		print_tree(root);
		std::cout << std::endl;
  int key = 84;
		std::cout << "removing: " << key << std::endl;
		root = remove_element(root, key);
  key = 77;
		std::cout << "removing: " << key << std::endl;
		root = remove_element(root, key);
  key = rand()%MAXVALUE;
		std::cout << "removing: " << key << std::endl;
		root = remove_element(root, key);
  key = rand()%MAXVALUE;
		std::cout << "removing: " << key << std::endl;
		root = remove_element(root, key);
  key = rand()%MAXVALUE;
		std::cout << "removing: " << key << std::endl;
		root = remove_element(root, key);
		std::cout << "removing: " << key << std::endl;
		root = remove_element(root, key);
		std::cout << "Final tree: " << std::endl;
		print_tree(root);
		std::cout << std::endl;
  delete_tree(root);
		return 0;
}


// Add hereafter the definition of compute_sum
void addArray(tree * albero, int arr[], int i){
    if (albero!=nullptr)
    {
		cout << albero->data<< " " << i;
        arr[i]=albero->data;
        addArray(albero->left,arr,i+1);
        addArray(albero->right,arr,i+1);     
    }
	
}
tree * addElement(tree *& albero, int value){

    if (albero==nullptr)
    {
        tree * albero=new tree;
        albero->data=value;
        albero->right=nullptr;
        albero->left=nullptr;    
    }else{
       if (albero->data > value)
        {
        albero->left= addElement(albero->left,value);
        }else{
        albero->right= addElement(albero->right,value);
    	} 
    }
    
    return albero;
}
void stampaArray(const int arr[],int dimensione){

    for (int i = 0; i < dimensione; i++)
    {
        cout << arr[i] << "  ";
    }

}
tree * remove_element(tree  * root , int value){
	tree * rootNewTree=nullptr;
    int temp[MAXSIZE]={-1};
	addArray(root,temp,0);
	stampaArray(temp,MAXSIZE);
	bool isPresente=false;
	for (int i = 0; i < MAXSIZE && !isPresente; i++)
	{
		if (temp[i]==value)
		{
			isPresente=true;
		}
	}
	for (int  i = 0; i < MAXSIZE; i++)
	{
		addElement(rootNewTree,temp[i]);
	}
	print_tree(rootNewTree);
	std::cout << std::endl;
	return rootNewTree;
}

// Add here above the definition of compute_sum
