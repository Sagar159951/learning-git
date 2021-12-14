void merge(int arr[], int l, int m, int r){
    int n1 = m-l+1;
    int n2 = r-m;
    int a[n1];
    for(int i=0; i<n1; i++) a[i]=arr[l+i];
    int b[n2];
    for(int j=0; j<n2; j++) b[j]=arr[m+1+j];
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            arr[k]=a[i];
            i++;
        }else{
            arr[k]=b[j];
        }
        k++;
    }
    while(i<n1){
        arr[k]=a[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=b[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int l, int r){
    if(l>=r) return;
    int mid = l + (r-l)/2;
    mergesort(arr, l, mid);
    mergesort(arr, mid+1, r);
    merge(arr, l, mid, r);
} 