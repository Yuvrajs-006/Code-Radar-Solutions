#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int index=0;
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            c++;
        }
        else{
            arr[index]=arr[i];
            index++;
        }
    }
    for(int i=0;i<c;i++){
        arr[index]=0;
        index++;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}