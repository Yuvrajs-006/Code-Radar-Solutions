#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 2000001  // Handle large negative and positive numbers

int main() {
    int n, t;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &t);

    int *hash = (int *)calloc(MAX_SIZE, sizeof(int));  // Hash table
    int found = 0; // Track if any pair is found

    for (int i = 0; i < n; i++) {
        int complement = t - arr[i] + 1000000;  // Offset to avoid negatives

        if (complement >= 0 && complement < MAX_SIZE && hash[complement] > 0) {
            printf("%d %d\n", t - complement, arr[i]);
            found = 1;
            hash[complement]--;  // Decrease count to prevent reusing the same instance
        } else {
            hash[arr[i] + 1000000]++;  // Store value in hash table (counts occurrences)
        }
    }

    if (!found) {
        printf("No valid pair found\n");
    }

    free(hash);  // Free allocated memory
    return 0;
}

