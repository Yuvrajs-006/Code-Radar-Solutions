int findUnsortedSubarray(int arr[],int n){
    int l=0;
    int r=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            l=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]<arr[i-1]){
            r=i;
            break;
        }
    }
    return r-l+1;
}