#include <stdio.h>



int main(){
	int a,b;
	char n[10];
	scanf("%d%d",&a,&b);
	scanf("%s",&n);
	switch(n){
		case '+':
			printf("%d",a+b);
			break;
		case '-':
			printf("%d",a-b);
			break;
		case '*':
			printf("%d",a*b);
			break;
		case '/':
			printf("%d",a/b);
			break;
		case '%':
			printf("%d",a%b);
			break;
		default:
			printf("invalid operator");
			break;
	}
}