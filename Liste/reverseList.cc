node * reverse(node * x) {
    node * t;
    node * y = x;
    node * r = NULL;
    while ( y != NULL ) {
        t = y->next;
        y->next = r;
        r = y;
        y = t;
    }
    return r;
}