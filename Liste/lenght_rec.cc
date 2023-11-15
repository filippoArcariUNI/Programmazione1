int lenght(node * s){
    if (nullptr==s)
    {
        return 0
    }else{
        return 1 + lenght(s->next);
    }
    
}

int lenght(node *s){
    node *x =s;
    int l=0;
    if (s != NULL){
	l = 1;
	    for( s = s->next; s != x; s = s->next){
	    l++;
        }
	}
    return l;
    
}