#ifndef PILA_H
#define PILA_H
 
struct nodoPila {
    int value;
    nodoPila* next;
};

typedef nodoPila* stack;
 
void pila_init(stack &);
bool pila_push(stack &, long);
bool pila_top(stack &, long );
bool pila_pop(stack &);
void pila_deinit(stack& );
void pila_print(stack );
 
#endif