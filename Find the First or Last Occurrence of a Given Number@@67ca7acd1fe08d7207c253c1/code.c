int findOccurrence(int arr[],int n,int target,char mode){
    int flag=0;
    if(mode=='F'){
        for(int i=0;i<n;i++){
            if(target==arr[i]){
                return i;
                flag=1;
                break;
            }

        }
    }
    else{
        for(int i=n-1;i>=0;i--){
            if(target==arr[i]){
                return i;
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        return -1;
    }
}