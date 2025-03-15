#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); 
    }
    int index=0;
    int arr1[index];
    for(int i=0;i<n;i++){
        int num=arr[i];
        int c=0;
        for(int j=0;j<n;j++){
            if(num==arr[j]){
                c++;
            }
        }
        arr1[index]=c;
        index++;
    }
    int p=0;
    for(int i=0;i<index;i++){
        if(arr1[i]>=n/2){
            printf("%d",arr[i]);
            break;
        }
    }
}