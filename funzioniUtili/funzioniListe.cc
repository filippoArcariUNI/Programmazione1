void insert(list *&l,list *node, int value) {
    if (node != nullptr) {
        node->info = value;
        node->next = nullptr;

        if (l == nullptr) {
            l = node; 
        } else {
            List *temp = l;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = node; 
        }
    } else {
        cout << "Error" << endl;
    }
}

void insertRec(List *&l, List *node, int value) {
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

int listOccurence(list * l,int value){
    if (l==nullptr)
    {
        return 0;
    }else{
        if (l->code==value)
        {
            return 1+listOccurence(l->next,value);
        }else{
            return listOccurence(l->next,value);
        }
        
    }
    
}

int listSum(list* l){
    if (l==nullptr)
    {
        return 0;
    }else{
        return l->info + listSum(l->next);
    }
}
int listElement(list * l){
    if (l==nullptr)
    {
        return 0;
    }else{
        return 1 + listElement(l->next);
    }
}
