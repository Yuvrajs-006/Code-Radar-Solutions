

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], t;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &t);

    int found = 0; // Track if any pair is found

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  
            if (arr[i] + arr[j] == t) {
                printf("%d %d\n", arr[i], arr[j]);
                found = 1; 

                // Mark arr[j] as used to avoid duplicate prints
                arr[j] = 1000001; // Assign an out-of-range value (assuming input is within -10^6 to 10^6)
                break;  // Stop checking after finding the first valid pair
            }
        }
    }

    if (!found) {
        printf("No valid pair found\n");
    }

    return 0;
}
