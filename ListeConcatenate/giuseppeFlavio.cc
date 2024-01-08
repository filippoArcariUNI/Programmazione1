#include <iostream>
#include <fstream>
using namespace std;
struct list
{
    int info;
    list * next;
};


void insertTail(list*& l, list* newNode, int value) {
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
void insertFirst(list*& l, list* newNode, int value) {
    if (newNode != nullptr) {
        newNode->info = value;
        if (l == nullptr) {
            l = newNode;
            newNode->next = newNode;  
        } else {
            newNode->next = l->next;
            l->next=newNode;
         
        }
    } else {
        cout << "Error, node not allocated" << endl;
    }
}
void printCicurlarList(list * l,list * root=nullptr){
    if (l == nullptr) {
        return;
    }
    if (l->next == root) {
        return;
    }
    if (root == nullptr) {
        root = l;
        cout << l->info<< " ";

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
        delete l;
        l=nullptr;
    }else{
        list * t=l->next;
        l->next=t->next;
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

void sortedInsert(list *& head_ref, list * new_node)  
{  
    list * current = head_ref;  
    if (current == NULL)  
    {  
        new_node->next = new_node;  
        head_ref = new_node;  
    }   
    else if (current->info >= new_node->info)  
    {  
        while(current->next != head_ref)  
            current = current->next;  
        current->next = new_node;  
        new_node->next = head_ref;  
        head_ref = new_node;  
    }  
      
    else
    {  
        while (current->next!= head_ref && current->next->info < new_node->info)  
        current = current->next;  
      
        new_node->next = current->next;  
        current->next = new_node;  
    }  
}  
  

void findMin(list* start, list*& minNode, list* startNode = nullptr) {
    // If start is nullptr, return
    if (start == nullptr) return;

    // If this is the first call to findMin, initialize minNode and startNode to start
    if (startNode == nullptr) {
        minNode = start;
        startNode = start;
    }

    // If we've traversed the whole list, return
    if (start->next == startNode) return;

    // If the current node is smaller than or equal to minNode, update minNode
    if (start->info <= minNode->info) {
        minNode = start;
    }

    // Recursively call findMin for the next node
    findMin(start->next, minNode, startNode);
}
void findMax(list* l, list*& minNode, list* head = nullptr) {
    if (l == nullptr) {
        return;
    }

    if (head == nullptr) {
        head = l;
        minNode = l; 
        findMax(l->next, minNode, head);
    } else {
        
        if (l == head) {
            l=minNode;
            
            return;
        }else{
            if (l->info > minNode->info) {
                minNode = l;
            }
            findMax(l->next, minNode, head);
        }
    }
}


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

void splitListHelper(list* head, list*& firstHalf, list*& secondHalf) {
    // Base case: if head is null or has only one node
    if (head == nullptr || head->next == nullptr) {
        firstHalf = head;
        secondHalf = nullptr;
    } else {
        list* slow = head;
        list* fast = head->next;

        // Recursive case: split the rest of the list
        if (head->next != nullptr && fast != nullptr) {
            splitListHelper(head->next->next, slow->next, fast->next);
        }

        // When fast reaches the end of the list, slow will be at the midpoint
        if (fast == nullptr || fast->next == nullptr) {
            firstHalf = head;
            secondHalf = slow->next;
            slow->next = nullptr;  // Split the list into two halves
        }
    }
}


list* mergeSortedLists(list* first, list* second) {
    if (first == nullptr) {
        return second;
    }
    if (second == nullptr) {
        return first;
    }

    list* result = nullptr;
    if (first->info <= second->info) {
        result = first;
        result->next = mergeSortedLists(first->next, second);
    } else {
        result = second;
        result->next = mergeSortedLists(first, second->next);
    }

    return result;
}


int main(int argc, char** argv) {
    list* l = nullptr;
    fstream in;
    if (argc!=2)
    {
        cout << "Errore "<< endl;
        return 1;
    }
    
    in.open(argv[1], ios::in);

    int n;
    while (in >> n) {
        list* x = new list;
        insertTail(l,x,n);
    }

    printCicurlarList(l);
    circularToNormal(l);
    list * prima=nullptr;
    list * seconda=nullptr;
    splitListHelper(l,prima,seconda);
    cout << prima->info<< endl;
    cout << seconda->info<< endl;
    l=mergeSortedLists(prima,seconda);
    normalToCircular(l,l);
    cout << "\nSorted Circular List: ";
    printCicurlarList(l);
    cout << endl;
    deallocCircularListRec(l);
    return 0;
}
