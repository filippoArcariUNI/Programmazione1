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
list * minList(list * l, list * min=nullptr){
    if (l==nullptr)
    {
        return min;
    }else{
        if (min==nullptr)
        {
            min=l;
        }else{
            if (l->info < min->info)
            {
                min=l;
            }
            
        }
        return minList(l->next,min);
    } 
}


void normalToCircular(list*& l, list*& last) {
    if (l == nullptr) {
        return;
    }

    if (l->next == nullptr) {
        // If the current node is the last node in the original list
        last = l;
    }

    normalToCircular(l->next, last);

    if (l->next == nullptr) {
        // Make the list circular by connecting the last node to the first node
        last->next = l;
    }
}
//Liste Circolari
void circularToNormal(list* l, list* head=nullptr) {
    // Base case: if the node's next pointer points to the head, set it to null
    if (head==nullptr)
    {
        head=l;
    }
    if (l->next == head) {
        l->next = nullptr;
        return;
    }
    circularToNormal(l->next, head);
}
void removeNode(list*& l) {
    if (l == nullptr) {
        return;
    }

    list* temp = l;
    while (temp->next != l) {
        temp = temp->next;
    }

    if (temp == l) {
        delete l;
        l = nullptr;
    } else {
        temp->next = l->next;
        delete l;
        l = temp->next;
    }
}

void insertTailRecursive(list*& l, list* newNode, int value) {
    if (newNode != nullptr) {
        newNode->info = value;
        if (l == nullptr) {
            l = newNode;
            newNode->next = newNode;  
        } else {
            newNode->next = l->next;
            l->next = newNode;
            l = newNode; 
        }
    } else {
        cout << "Error, node not allocated" << endl;
    }
}

void printCicurlarList(list * l,list * root=nullptr){
    
    if (l == root) {
        cout << l->info<< " ";
        return;
    }
    if (root == nullptr) {
        root = l;
        printCicurlarList(l->next,root);

    }else{
        cout << l->info<< " ";
        printCicurlarList(l->next,root);
    }
}

void removeNode(list*& l) {
    if (l == nullptr) {
        return;
    }

    if (l->next == l) {
        delete l;
        l = nullptr;
    } else {
        list* temp = l->next;
        l->info = temp->info;
        l->next = temp->next;
        delete temp;
    }
}

void deallocCircularList(list * l){
    while (l!=l->next)
    {
        list * t = l->next;
        l->next=t->next;
        delete t;
    }
    delete l;
    l=nullptr;
}

void deallocCircularListRec(list * l){
    if (l==nullptr)
    {
        return;
    }
    
    if (l->next==l)
    {
        cout << "Rimuovo: " << l->info<< endl;
        delete l;
        l=nullptr;
    }else{
        list * t=l->next;
        l->next=t->next;
        cout << "Rimuovo: " << t->info<< endl;
        delete t;
        deallocCircularListRec(l);
    } 
}


int countCircurlaList(list * l,list * head= nullptr){
    if (l==nullptr)
    {
        return 0;
    }
    if (head==nullptr)
    {
        head=l->next;
        cout <<  1+countCircurlaList(l,head->next)<< endl;
        return 1+countCircurlaList(l,head->next);
    }else{
        if (head==l)
        {
            return 1;
            
        }else{
            return 1+countCircurlaList(l,head->next);
        }
    }
    
}

void findMin(list* l, list*& maxNode, list* head = nullptr) {
    if (l == nullptr) {
        return;
    }

    if (head == nullptr) {
        head = l;
        maxNode = l;  
        findMin(l->next, maxNode, head);
    } else {
        if (l != head) {
            if (l->info < maxNode->info) {
                maxNode = l;  
            }
            findMin(l->next, maxNode, head);
        }else{
            l=maxNode;
        }
    }
}

void findMax(list* l, list*& maxNode, list* head = nullptr) {
    if (l == nullptr) {
        return;
    }

    if (head == nullptr) {
        head = l;
        maxNode = l; 
        findMax(l->next, maxNode, head);
    } else {
        
        if (l == head) {
            l=maxNode;
            
            return;
        }else{
            if (l->info > maxNode->info) {
                maxNode = l;
            }
            findMax(l->next, maxNode, head);
        }
    }
}