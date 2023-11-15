void deallocazione(node * s){
    while (s!=nullptr)
    {
        node * t=s;
        s=s->next;
        delete t;
    }   
}

void deallocazione_rec(node *s){
    if (s!=nullptr)
    {
        deallocazione_rec(s-next);
        delete s;
    }
}