// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int flag=0;
    int num=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]!=num){
            flag=1;
            break;
        }
    }
    if(flag==0 || n==1){
        printf("-1");
    }
    else{
        printf("%d",arr[1]);
    }

}