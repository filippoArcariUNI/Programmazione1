node * remove_element(node *x) {
    node * y = x->next;

    if (nullptr !=x && nullptr !=y)
    {
        x->next = y->next;
        y->next = NULL; 
    }
    
    return y; // ritorna l' indirizzo di memoria al chiamante, in modo che faccia ciò che vuole, manca la DEALLOCAZIONE
}

void removeFirstElement(node * & x){
    node * next=x->next;
    if (x!= nullptr)
    {
        s= s->next;
        delete n;
    }
    
    delete x;
}

void removeSelectedElement(node * & x, int val){
    
    if (p != NULL) {
        nodo* q = p;
        if (q->dato == val) { 
            p = p->next;
            delete q;
        }
        else {
        while(q->next != NULL) {
            if (q->next->dato == val) {
                nodo* r = q->next;
                q->next = q->next->next;
                delete r;
                return;
            }
            if (q->next != NULL) {
                q=q->next;
            }
        }
        }
    }
}

// Liste Doppiamente Concatenate

void remove(node * t) {
    t->next->prev = t->prev;
    t->prev->next = t->next;
    delete t;
}


    
    
    
