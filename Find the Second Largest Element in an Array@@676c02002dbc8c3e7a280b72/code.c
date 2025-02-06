#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            c=0;
        }
        else{
            c+=1;
        }
    }
    if(c>0){
        printf("-1");
    }
    else{
        printf("%d",arr[n-2]);
    }
    
}