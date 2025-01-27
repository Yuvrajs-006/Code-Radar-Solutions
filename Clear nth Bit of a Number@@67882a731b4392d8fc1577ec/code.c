#include <stdio.h>



int clearBit(int N, int K) {
  
    // Bitwise AND with the mask
    return (N & (~(1 << (K))));
}


int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    printf("%d",clearBit(n,k));
    return 0;
}