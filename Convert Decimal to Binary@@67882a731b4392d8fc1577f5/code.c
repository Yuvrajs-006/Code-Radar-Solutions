#include <stdio.h>

int main() {
    int n, binary = 0, place = 1;
    scanf("%d", &n);

    while (n > 0) {
        int rem = n % 2;
        n = n / 2;
        binary += rem * place;
        place *= 10;
    }

    printf("%d", binary);
    return 0;
}
