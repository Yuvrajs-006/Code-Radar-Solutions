#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            if(a==1){
                printf("%d ",a);
                a=0;
            }
            else{
                printf("%d ",a);
            }
        }
        printf("\n");
    }
}