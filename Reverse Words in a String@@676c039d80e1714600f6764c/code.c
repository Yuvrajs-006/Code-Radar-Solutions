#include <stdio.h>
#include <string.h>

int main() {
    char n1[100];
    fgets(n1, sizeof(n1), stdin);
    // n1[strcspn(n1, "\n")] = '\0';  // Remove newline character

    char *t = strtok(n1, " ");  // Get first token

    while (t != NULL) {
        char n2[100];
        strcpy(n2, t);  // Copy word to n2

        char n3[100];  // To store reversed word
        int index = 0;

        // Reverse the word
        for (int i = strlen(n2) - 1; i >= 0; i--) {
            n3[index++] = n2[i];
        }
        n3[index] = '\0';  // Add null terminator

        printf("%s ", n3);  // Print reversed word

        t = strtok(NULL, " ");  // Get next word
    }

    printf("\n");
    return 0;
}
