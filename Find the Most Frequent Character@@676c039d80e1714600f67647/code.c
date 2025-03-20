#include <stdio.h>
#include <string.h>

int main() {
    char n1[100];
    fgets(n1, sizeof(n1), stdin);

    // Remove newline if present
    n1[strcspn(n1, "\n")] = '\0';

    int freq[256] = {0}; // Frequency array for all ASCII characters
    int sizes = strlen(n1);

    // Count frequency of each character
    for (int i = 0; i < sizes; i++) {
        freq[(unsigned char)n1[i]]++;
    }

    // Find the maximum frequency
    int max = 0;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > max) {
            max = freq[i];
        }
    }

    // Find the smallest ASCII character among the most frequent ones
    char min_char = 127; // Start with a high ASCII value
    for (int i = 0; i < 256; i++) {
        if (freq[i] == max && i < min_char) {
            min_char = i;
        }
    }

    printf("%c\n", min_char);
    return 0;
}
