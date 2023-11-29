
#ifndef listFunc
#define listFunc
struct node
{
    int val;
    node * next;
};

void printList(node * firstNode);
void printListRec(node * firstNode);
void deallocList(node *& firsNode);
void deallocListRec(node *& firstNode);
node * createNode(node * previusNode,int val);
int coutList(node * firstNode);
void printReverseList(node * firstNode);
void primalizzaLista(node *& firstNode);
void primalizzaListaRec(node*& firstNode);
node * deleteElement(node * selectedNode);
node * unisciListe(node * lista1,node* lista2);
node* unisciListeRec(node* lista1, node* lista2);
void printReverseListRec(node * firstNode);
#endif