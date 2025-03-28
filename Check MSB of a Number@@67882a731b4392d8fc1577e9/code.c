#include <stdio.h>
#define BITS sizeof(int) * 8 // Total bits required to represent integer

int main()
{
    int num, msb;

    /* Input number from user */
    scanf("%d", &num);

    /* Move first bit of 1 to highest order */
    msb = 1 << (BITS - 1);

    /* Perform bitwise AND with msb and num */
    if(num & msb)
        printf("Set");
    else
        printf("Not Set");

    return 0;
}