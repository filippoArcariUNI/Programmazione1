#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void sort_array(int * array, int len_array) {
  for (int i=0; i<len_array; i++) {
    for (int j=i+1; j<len_array; j++) {
      if (array[i] > array[j]) {
        int tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
      }
    }
  }
}



int main(int nArg,char * arg[]){
     if (nArg != 4)
    {
        cout << "Usage: ./a.out <fileInput> <nElemenit> <NumElementiSelezionati> \n";
        exit(1);
    }
    fstream in,out;
    in.open(arg[1],ios::in);
    out.open("output.txt",ios::out);
    int dim=atoi(arg[2]);
    int nMaggiori=atoi(arg[3]);

    
    if (in.fail() || out.fail())
    {
        cout << "Errore nell' apertura dei file \n";
        exit(2);
    }
    int  * list= new int[dim];
    int buffer;
    for (int i = 0; i < dim; i++)
    {
        in >> buffer;
       list[i]=buffer;
    }
    sort_array(list,dim);

    for (int i = 0; i < dim; i++)
    {
        cout << list[i] << endl;
    }
    
    
    for (int i = dim-1 ; i >= dim-nMaggiori; i--)
    {
        out << list[i]<< endl;
    }
    
    delete[] list;
    in.close();
    out.close();
    return 0;
}