#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    fgets(str, sizeof(str), stdin);  // Read input with spaces
    str[strcspn(str, "\n")] = 0;  // Remove newline

    int count = 0;
    char *token = strtok(str, " ");  // First token

    while (token != NULL) {
        count++;
        token = strtok(NULL, " ");  // Next token
    }

    printf("%d\n", count);
    return 0;
}

