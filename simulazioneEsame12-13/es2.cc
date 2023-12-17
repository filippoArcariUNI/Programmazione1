#include <iostream>
#include <string>

using namespace std;

typedef struct _list {
  int code;
  struct _list * next;
} list;

#define MAXCODE 100
#define MAXDIP 10

// Add hereafter the declaration of estrai
list * estraiRec(list *l1 ,  list * l2, list *& l3);
list * estrai(list *l1,list * l2);
int conta(list * t, int );
// Add here above the declaration of estrai

list * crea_lista(int num) {
  int * a = new int[num];
  for (int i = 0; i < num; i++) {
    a[i] = rand()%MAXCODE + 1;
    for (int j = 0; j < i; j++) {
      if (a[i] == a[j]) { i--; break;}
    }
  }
  list * res = NULL;
  for (int i = 0; i < num; i++) {
    res = new list{a[i], res};
  }
  delete [] a;
  return res;
}

list * crea_l2(list * const l1, const int t = 5) {
  list * res = NULL;
  for (int k = t; k >= 0; k--) {
    for (list * d = l1; d != NULL; d = d->next) {
      if (rand()%2 == 0) {
        res = new list{d->code, res};
      }
    }
  }
  return res;
}

void print_list(list * l, const char * prefix) {
  std::cout << prefix;
  for( ; l != NULL; l = l->next)
    std::cout << " " << l->code;
  std::cout << std::endl;
}

void delete_list(list * & l) {
  while(l != NULL) {
    list * p = l;
    l = l->next;
    delete p;
  }
}

int main(int argc, char ** argv) {
//   srand(unsigned(time(0)));
		//
		// Scommentare la linea seguente per avere comportamento
		// deterministico
		//
		srand(0);

  list * l1 = crea_lista(MAXDIP);
  print_list(l1, "Lista L1:");
  list * l2 = crea_l2(l1);
  print_list(l2, "Lista L2:");
  list * l3 = estrai(l1, l2);
  print_list(l3, "Lista L3:");
  delete_list(l1);
  delete_list(l2);
  delete_list(l3);
  return 0;
}


// Add hereafter the definition of estrai
list * estraiRec(list *l1 ,  list * l2, list *& l3){
    
    if (l1==nullptr)
    {
       return l3;
    }else{
        list * x=new list;
        int occurence=conta(l2,l1->code);
       
        if (l3==nullptr)
        {
          if ((l2->code%2)==0)
          {
            x->code=occurence;
            x->next=nullptr;
            l3=x;
            estraiRec(l1->next,l2,l3);
          }else{
            x->code=-1;
            x->next=nullptr;
            l3=x;
            estraiRec(l1->next,l2,l3);
          }
        }else{
          if ((l2->code%2)==0)
          {
            x->code=occurence;
            x->next=nullptr;
            l3->next=x;
            estraiRec(l1->next,l2,l3->next);
          }else{
            x->code=-1;
            x->next=nullptr;
            l3->next=x;
            estraiRec(l1->next,l2,l3->next);
          }
          
         
        }
        cout << l1<< endl;
        print_list(l3, "Lista L3:");
        //  cout << x <<  "->" << x->code << endl;
  }
    
}
list * estrai(list *l1,list * l2){
   if (l1!=nullptr && l2!=nullptr)
   {
        list *l3= nullptr;
        list * res=estraiRec(l1,l2,l3);
       return res;
   }
    
}

int conta(list  * t, int value){
    // if (!t)
    // {
    //   return t;
    // }else{
    //   if ((t->code%2)==0)
    //   {
    //     t++;
    //   } 
    //   return conta(t->next,value,t)
    // }
    
    
    if (t==nullptr)
    {   
        return 0;
    }else{
        if (t->code==value)
        {
          int temp=  1+conta(t->next,value);
          return temp;
        } else{
          return  conta(t->next,value);
        }
        
    }
    
}

// Add here above the definition of estrai
