#include <stdlib.h>
int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int findUnsortedSubarray(int arr[], int n) {
    int l = -1, r = -1;

    // Find the first unsorted index from the left
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            l = i;
            break;
        }
    }

    // If the array is already sorted, return
    if (l == -1) {
        printf("The array is already sorted.\n");
        return;
    }

    // Find the first unsorted index from the right
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            r = i;
            break;
        }
    }

    // Sort only the subarray from l to r
    qsort(arr + l, r - l + 1, sizeof(int), cmp);

    // Print the modified array
    return sizeof(arr)/sizeof(arr[0]);
}
