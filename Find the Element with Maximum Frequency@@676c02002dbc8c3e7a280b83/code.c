#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr1[n];
    for(int i=0;i<n;i++){
        int c=0;
        int num=arr[i];
        for(int i=0;i<n;i++){
            if(arr[i]==num){
                c++;
            }
        }
        arr1[i]=c;
    }
    int num=0;
    for(int i=0;i<n;i++){
        if(num<arr1[i]){
            num=arr1[i];
        }
    }
    for(int i=0;i<n;i++){
        if(num==arr1[i]){
            printf("%d",arr[i]);
            break;
        }
    }
}