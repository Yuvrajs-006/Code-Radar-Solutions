#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int n1=1;
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>0;j){
            printf(" ");
        }
        for(int j=1;j<=n1;j++){
            printf("*");
        }
        printf("\n");
    }
}