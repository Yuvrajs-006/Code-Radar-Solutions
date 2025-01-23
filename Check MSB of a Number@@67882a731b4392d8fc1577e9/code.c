
#include <stdio.h>
#include <math.h>
 
int setBitNumber(int n)
{
 
    if (n == 0)
        return 0;
 
    int msb = 0;
    n = n / 2;
    while (n != 0) {
        n = n / 2;
        msb++;
    }
 
    return (1 << msb);
}
int main() {
    int n = 273;
    printf("%d",setBitNumber(n));
 
    return 0;
}