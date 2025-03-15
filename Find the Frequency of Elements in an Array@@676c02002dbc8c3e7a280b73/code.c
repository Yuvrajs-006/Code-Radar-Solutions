#include <stdio.h>

int main() {
    int size;

    // Take user input for array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size], visited[size];

    // Take user input for array elements
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; // Initialize visited array
    }

    // Find frequency of each element
    for (int i = 0; i < size; i++) {
        if (visited[i] == 1)  // Skip already counted elements
            continue;

        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark as counted
            }
        }
        printf("%d %d\n", arr[i], count);
    }

    return 0;
}
