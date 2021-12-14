#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int n){
    for(int i=1; i<n; i++){
        int j=i-1;
        key = arr[i];
        while(j>=0 && arr[j]>arr[i]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}