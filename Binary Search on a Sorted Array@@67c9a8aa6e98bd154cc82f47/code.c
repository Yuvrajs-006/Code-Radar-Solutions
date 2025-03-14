int binarySearch(int arr[],int n,int target){
    // int l=0,h=n-1,m;
    // m=(l+h)/2;
    int flag=0;
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            return i;
            flag=1;
            break;
        }
    }
    if(flag==0){
        return -1;
    }

}