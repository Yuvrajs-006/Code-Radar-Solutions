#include <stdio.h>
#include <string.h>

int main(){
    char n1[100],n2[100];
    scanf("%s %s",n1,n2);
    int sum1=0,sum2=0;
    for(int i=0;n1[i]!='\0';i++){
        sum1+=n1[i];
    }
    for(int i=0;n2[i]!='\0';i++){
        sum2+=n2[i];
    }
    if(sum1==sum2){
        printf("Yes");
    }
    else{
        printf("No");
    }
}