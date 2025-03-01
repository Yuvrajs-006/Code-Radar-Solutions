#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    int s=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int j=1;j<=s-1;j++){
            printf("*");
        }
        s-=2;

        printf("\n");
    }
}