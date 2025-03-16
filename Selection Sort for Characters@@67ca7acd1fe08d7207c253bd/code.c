void selectionSort(char arr[],int n){
    for(int i=0;i<n-1;i++){
        int num=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[num]){
                num=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[num];
        arr[num]=temp;
    }
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}