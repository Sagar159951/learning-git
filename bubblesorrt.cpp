void bubblesort(int arr, int n){
    counter=1    ;
    while(counter<n){
        for(int i=0; i<n-counter; i++)
            if(arr[i]>arr[i+1])
                swap(arr[i],arr[i+1]);
        counter++;
    }
}