struct node;

typedef node * albero;

struct node
{
    char value;
    albero dxChild;
    albero sxChild;
};


void printTree(albero radice);
albero treeSearch(albero tree,char value);
void treeInit(albero &  tree);
albero addElement(albero & tree, char value);
void printOrdered(albero  tree);
void deallocTree(albero tree);