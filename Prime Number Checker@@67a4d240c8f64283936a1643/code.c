#include <stdio.h>

// int isPrime(int num);

// int main(){
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int num;
//         scanf("%d",&num);
//         printf("%d\n",isPrime(num));
//     }
//     return 0;
// }

int isPrime(int num){
    int flag=0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        return 0;
    }
    else{
        return 1;
    } 
    
}