#include <stdio.h>
#include <string.h>

int main() {
    char n1[100];
    fgets(n1, sizeof(n1), stdin);
    n1[strcspn(n1, "\n")] = '\0';  // Remove newline

    int i = 0;
    while (n1[i] != '\0') {
        // Print spaces as they are
        while (n1[i] == ' ') {
            printf(" ");
            i++;
        }

        // Find the start of a word
        int start = i;
        while (n1[i] != ' ' && n1[i] != '\0') {
            i++;
        }

        // Reverse and print the word
        for (int j = i - 1; j >= start; j--) {
            printf("%c", n1[j]);
        }
    }

    printf("\n");
    return 0;
}

