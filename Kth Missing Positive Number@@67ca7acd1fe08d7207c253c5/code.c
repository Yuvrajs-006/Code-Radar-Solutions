int findKthMissing(int arr[],int n,int k){
    int p=0,index=0,num=1;
    while(p<k){
        if(index<n && arr[index]==num){
            index++;
        }
        else{
            p++;
            if(p==k){
                return num;
            }
        }
        num++;
    }

}