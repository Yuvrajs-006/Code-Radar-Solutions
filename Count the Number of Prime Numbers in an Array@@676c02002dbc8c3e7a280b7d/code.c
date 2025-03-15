#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int c=0;
    for(int i=0;i<n;i++){
        int num=arr[i];
        int flag=0;
        if(num>1){
            for(int i=2;i<num;i++){
                if(num%i==0){
                    flag=1;
                    break;
                }
            }
        }
        else{
            flag=1;
        }
        if(flag==0){
            c++;
        }
    }
    printf("%d",c);
}