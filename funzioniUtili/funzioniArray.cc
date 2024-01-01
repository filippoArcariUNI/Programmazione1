void riempiArray(int arr[],int dim){
    for (int i = 0; i < dim; i++)
    {
        arr[i]=rand()%10;
    }
    
}

int indexMax(int * arr,int dim){
    int max=0;
    for (int i = 0; i < dim; i++)
    {
       if (arr[i]>max)
       {
            max=i;
       }
       
    }
    return max;
    
}
void stampaArray(const int arr[],int dimensione){

    for (int i = 0; i < dimensione; i++)
    {
        cout << arr[i] << "  ";
    }

}

void bubbleSortRec(int arr[],int dimensione, int i, int j){
    bool scambi=false;

     if (i<dimensione-1)
        {

            if (arr[i] > arr[i+1])
            {
          
                int t=arr[i+1];
                arr[i+1] = arr[i];
                arr[i]=t;
                scambi=true;

                
            }

            bubbleSortRec(arr,dimensione,i+1,j);
            
        }

    if (scambi || j<=dimensione-1)
    {
        i=0;
       bubbleSortRec(arr,dimensione,i,j+1);
        
    }else{
        return;
    }
   
}

void bubbleSort(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++) 
            if (arr[j] > arr[j + 1]){
                int t=arr[i+1];
                arr[i+1] = arr[i];
                arr[i]=t; 
            }
    }
} 

int indexMax(int * arr,int dim){
    int max=0;
    for (int i = 0; i < dim; i++)
    {
       if (arr[i]>max)
       {
            max=i;
       }
       
    }
    return max;
    
}