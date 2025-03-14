#include <stdio.h>

int main() {
    int n, binary[64], i = 0;

    scanf("%d", &n);

    if (n == 0) {
        printf("0");
        return 0;
    }

    // Convert decimal to binary
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Print binary in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}

