void selectionSort(char arr[][],int n){
    for(int i=0;i<n-1;i++){
        int num=i;
        for(int j=i+1;j<n;j++){
            if(arr[j][0]<arr[num][0]){
                num=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[num];
        arr[num]=temp;
    }
}
void printArray(char arr[][],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}