void selectonsort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int mindx = i;
        int j=i+1;
        while(j<n){
            if(arr[mindx]>arr[j]) mindx=j;
            j++
        }
        swap(arr[i],arr[mindx]);
    }
}