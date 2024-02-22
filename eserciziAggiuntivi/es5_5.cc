#include <iostream>
using namespace std;

void stampaArray(int * arr,int dim){

    for (int i = 0; i < dim; i++)
    {
        cout << arr[i]<<" ";
    }
}
void rimepiArray(int * arr, int dim){
    for (int i = 0; i < dim; i++)
    {
       arr[i]=rand()%10;
    }
}
void merge(int arr[], int p, int q, int r) {
  
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = p;
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    merge(arr, l, m, r);
  }
}
int main(){
    const int dimA=10;
    int arrA[dimA];
    rimepiArray(arrA,dimA);
    stampaArray(arrA,dimA);cout << endl;
    mergeSort(arrA,0,dimA-1);
    cout <<"----Ordinati----"<< endl;
    stampaArray(arrA,dimA);cout << endl;
    return 0;
}