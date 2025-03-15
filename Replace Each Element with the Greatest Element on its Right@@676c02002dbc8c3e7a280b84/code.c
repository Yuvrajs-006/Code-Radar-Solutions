#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int num=arr[i];
        if(i==n-1){
            arr[i]=-1;
        }
        for(int j=i+1;j<n;j++){
            if(num<arr[j]){
                num=arr[j];
            }
        }
        arr[i]=num;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}