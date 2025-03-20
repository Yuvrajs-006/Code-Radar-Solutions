#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], t;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &t);

    int found = 0; // To track if any pair is found

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  // Ensure unique pairs
            if (arr[i] + arr[j] == t) {
                printf("%d %d\n", arr[i], arr[j]);
                found = 1; // Pair found
            }
        }
    }

    if (!found) {
        printf("No valid pair found\n");
    }

    return 0;
}
