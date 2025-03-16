#include <stdio.h>

// Function to find the length of the shortest unsorted subarray
int findUnsortedSubarray(int arr[], int n) {
    int l = -1, r = -1;

    // Step 1: Find the first index (l) where order breaks
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            l = i;
            break;
        }
    }
    
    // If array is already sorted
    if (l == -1) return 0;

    // Step 2: Find the last index (r) where order breaks
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            r = i;
            break;
        }
    }

    // Step 3: Find the min and max in the unsorted subarray (arr[l] to arr[r])
    int minVal = arr[l], maxVal = arr[l];
    for (int i = l; i <= r; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    // Step 4: Expand `l` to the left if needed
    while (l > 0 && arr[l - 1] > minVal) {
        l--;
    }

    // Step 5: Expand `r` to the right if needed
    while (r < n - 1 && arr[r + 1] < maxVal) {
        r++;
    }

    // Step 6: Return the length of the subarray
    return r - l + 1;
}
