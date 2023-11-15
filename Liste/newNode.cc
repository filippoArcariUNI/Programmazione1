void insert_node(nodo * x, nodo *t) {
    if (t!=nullptr && x != nullptr)
    {
        t -> next = x -> next;
	    x -> next = t;
        
    }	
}

void insert_first(node*&s, int v) {
    node * n = new node;
    n->dato = v;
    n->next = s;
    s = n;
}

node * insert_first(node*s, int v) {
    node * n = new mode;
    n->dato = v;
    n->next = s;
    return n;   
}

void insert_last(nodo * & p, int n) {
    nodo * r = new nodo; // Alloco il nuovo nodo 
    r->dato = n;
    r->next = NULL;
    if (p != NULL) {
        node * q = p;
        while(q->next != NULL) { // mi assicuro che sia l' ultimo nodo
            q = q->next;
        }
        q->next = r; // Inserisco il nodo appena creato
    }
    else {
        p = r;
    }
}

void inserimentoOrdinato(nodo * & p, int n) {
        if ((p==NULL) || (p->dato >= n)) { //Controllo che n non sia il minore, altrimenti lo inserico in testa 
        insert_first(p, n);
    }
    else {
        nodo* q=p;
    while ((q->next != NULL) && (q->next->dato <= n)){
    q=q->next;
    }
    nodo* r = new nodo;
    r->dato = n;
    r->next = q->next;
    q->next=r;
    }
}


// liste Doppiemente Concantenate

void insert_node(node * x, node * t) {
    t->next = x->next;
    t->next->prev = t;
    t->prev = x;
    x->next = t;
}