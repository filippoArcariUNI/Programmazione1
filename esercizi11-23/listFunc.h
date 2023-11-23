
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
node * primalizzaLista(node * firstNode);
node * deleteElement(node * selectedNode);
void printReverseListRec(node * firstNode);
#endif