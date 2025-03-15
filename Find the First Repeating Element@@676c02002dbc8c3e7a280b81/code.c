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
        for(int j=i+1;j<n;j++){
            if(num==arr[j]){
                printf("%d",arr[j]);
                break;
            }
        }
    }
}