#include <stdio.h>



int main() {
    int a,b,c;
    float avg =0;
    scanf("%d%d%d",&a,&b,&c);
    avg=a+b+c;
    avg/=3;
    printf("%.2f",avg);
    return 0;
}