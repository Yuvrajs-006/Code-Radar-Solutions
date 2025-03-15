// Your code 

#include <stdio.h>
int main(){
    int n
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int c=0;
    for(int i=0;i<n;i++){
        int num=arr[i];
        int temp=num;
        int sum=0;
        while(temp>0){
            int rem=temp%10;
            sum=(sum*10)+rem;
            temp/=10;
        }
        if(sum==num){
            c++;
        }
    }
    printf("%d",c);
}