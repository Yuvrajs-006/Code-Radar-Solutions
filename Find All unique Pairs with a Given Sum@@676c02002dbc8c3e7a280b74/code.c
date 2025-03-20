#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], t, used[n];  // `used` array to track already printed elements

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        used[i] = 0;  // Initialize used array to 0
    }

    scanf("%d", &t);

    int found = 0; // Track if any pair is found

    for (int i = 0; i < n; i++) {
        if (used[i]) continue;  // Skip already used numbers

        for (int j = i + 1; j < n; j++) {  
            if (arr[i] + arr[j] == t && !used[j]) {
                printf("%d %d\n", arr[i], arr[j]);
                found = 1; 
                used[i] = used[j] = 1;  // Mark both numbers as used
                break;  // Stop after finding the first valid pair for `arr[i]`
            }
        }
    }

    if (!found) {
        printf("No valid pair found\n");
    }

    return 0;
}


