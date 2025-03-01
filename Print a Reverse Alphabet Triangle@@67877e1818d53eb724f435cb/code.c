#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=65;
        for(int j=i;j<=n;j++){
            printf("%c ",a);
            a+=1;
        }
        printf("\n");
    }
}