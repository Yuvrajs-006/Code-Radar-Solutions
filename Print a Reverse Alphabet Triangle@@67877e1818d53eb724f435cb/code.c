#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            printf("%d ",a);
            a+=1;
        }
        printf("\n");
    }
}