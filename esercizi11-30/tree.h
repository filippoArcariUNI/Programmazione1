struct node;

typedef node * albero;

struct node
{
    int value;
    albero dxChild;
    albero sxChild;
};


void printTree(albero radice);
albero treeSearch(albero * tree,int value);
void treeInit(albero &  tree);
albero addElement(albero & tree, int value);
void printOrdered(albero  tree);