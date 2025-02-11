// Your code here...

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag+=i;
            break;
        }
    }
    if(flag==0){
        printf("-1");
    }
    else{
        printf("%d",flag);
    }
}