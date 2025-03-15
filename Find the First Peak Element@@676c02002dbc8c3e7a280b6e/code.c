#include <stdio.h>



int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(i==0){
            if(arr[i]>arr[i+1]){
                printf("%d",arr[i]);
                break;
            }
        }
        else if(i!=0 && i!=(n-1)){
            if((arr[i]>arr[i-1]) &&(arr[i]>arr[i+1])){
                printf("%d",arr[i]);
                break;
            }
        }
        else if(i==(n-1)){
            if(arr[i]>arr[i-1]){
                printf("%d",arr[i]);
                break;
            }
        }
        int flag=0;
        for(int i=0;i<n;i++){
            if(arr[i]==arr[0]){
                flag++;
            }
        }
        if(flag==n){
            printf("-1");
        }
    }
    return 0;
}