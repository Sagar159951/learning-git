int partition(int arr[], int l, int r){
    int i=l-1;
    for(int j=l; j<r; j++){
        if(arr[j]<arr[r]){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[r]);
    return i+1;
}

void quicksort(int arr[], int l, int r){
    if(l<r){
        int pi = partition(arr, l, r);
        quicksort(arr, l, pi-1);
        quicksort(arr, pi+1, r);
    }
}