#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        int num=arr[i+1];
        for(int j=i+1;j<n;j++){
            if(num<arr[j]){
                num=arr[j];
            }
        }
        arr[i]=num;
    }
    arr[n-1]=-1;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}