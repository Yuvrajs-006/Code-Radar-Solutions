#include <stdio.h>
#include <stdlib.h>

// Comparator function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], t;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &t);



    int left = 0, right = n - 1;
    int found = 0;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == t) {
            printf("%d %d\n", arr[left], arr[right]);
            found = 1;

            // Move pointers while skipping duplicates
            int prevLeft = arr[left], prevRight = arr[right];
            while (left < right && arr[left] == prevLeft) left++;
            while (left < right && arr[right] == prevRight) right--;
        } 
        else if (sum < t) {
            left++;
        } 
        else {
            right--;
        }
    }

    if (!found) {
        printf("No valid pair found\n");
    }

    return 0;
}
