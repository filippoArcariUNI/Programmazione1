#include <iostream> 
using namespace std;
void scambio(int& a, int &b){
    int t=a;
    a=b;
    b=t;
}
void riordina(int*a ,int * b, int *c){
    if (*a > *b)
    {
        scambio(*a,*b);
    }
    if (*b > *c)
    {
       scambio(*c,*b);
    }
    if (*c>*b)
    {
     scambio(*c,*a);
    }
    if (*a > *b)
    {
        scambio(*a,*b);
    }
    if (*b > *c)
    {
       scambio(*c,*b);
    }
       
}
int main(){
    int a,b,c;
    cout << "Inserisci 3 numneri" << endl ;
    cin >> a>> b>> c;
    cout <<a<< b<< c<< endl;
    riordina(&a,&b,&c);
    cout <<a<< b<< c<< endl;


}