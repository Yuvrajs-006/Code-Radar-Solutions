// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int flag=0;
    int index=0;
    int arr1[index];
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            flag+=1;
            arr1[index]=arr[i];
            index++;
        }
    }
    if(flag==0){
        printf("-1");
    }
    else{
        int l=0;
        for(int i=0;i<=index;i++){
            if(l<arr1[i]){
                l=arr1[i];
            }
        }
        printf("%d",l);
    }
}