#include <stdlib.h>


int findUnsortedSubarray(int arr[], int n) {
    int l = -1, r = -1;

    // Find the first unsorted index from the left
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            l = i;
            break;
        }
    }

    // If the array is already sorted, return 0
    if (l == -1) {
        return 0;
    }

    // Find the first unsorted index from the right
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            r = i;
            break;
        }
    }

    // Return the length of the unsorted subarray
    return (r - l + 1);
}
