#include <iostream>

using namespace std;

bool  * init(int dim){
   bool * arr=new bool[dim];
   for (int i = 0; i < dim; i++)
   {
        arr[i]=false;
   }
   
   return arr;
}
void insert(bool *& arr,int dim, char * word){
    int i=0;
    while (word[i]!='\0')
    {
        int index=(int) word[i];
        arr[index]=true;
        i++;
    }
    
    
}

bool check(bool arr[],int  n,char * word){
    int i=0;

    while (word[i]!='\0')
    {
        int index=(int) word[i];
        if (arr[index]==false)
        {
            return false;
        }
        i++;
    }
    return true;
    
}
void deinit(bool *&arr){
  delete [] arr ; 
}

int main(int argc, char* argv[]) {

    // Se modificate la funzione "main", ricordarsi poi di ripristinare il codice originale
    int n = 255;

    bool* bloom_filter = init(n);

    char ciao[] = { 'c', 'i', 'a', 'o', '\0' };     
    insert(bloom_filter, n, ciao);
    cout << "Ho inserito la parola 'ciao' nel bloom filter" << endl;
    
    if (check(bloom_filter, n, ciao)) {
        cout << "La parola 'ciao' è presente nel bloom filter " << endl;
    } else {
        cout << "La parola 'ciao' NON è presente nel bloom filter " << endl;
    }

    char volo[] = { 'v', 'o', 'l', 'o', '\0' }; 
    if (check(bloom_filter, n, volo)) {
        cout << "La parola 'volo' è presente nel bloom filter " << endl;
    } else {
        cout << "La parola 'volo' NON è presente nel bloom filter " << endl;
    }

    deinit(bloom_filter);

    return 0;
}