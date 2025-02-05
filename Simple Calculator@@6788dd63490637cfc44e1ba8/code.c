#include <stdio.h>
int main(){
	int a,b;
    scanf("%d%d",&a,&b);
	char n;
	scanf("%c",&n);
    if(n='+'){
        printf("%d",a+b);
    }
    else if(n='-'){
        printf("%d",a-b);
    }
    else if(n='*'){
        printf("%d",a*b);
    }
    else if(n='/'){
        if(b==0){
            printf("error");
        }
        else{
            printf("%d",a/b);
        }
    }
    else{
        printf("error");
    }
}