#include <stdio.h>
#include <string.h>

int main() {
    char n1[100], n2[100];

    fgets(n1, sizeof(n1), stdin);
  
    fgets(n2, sizeof(n2), stdin);

    // // Remove the newline character from the strings (optional)
    // n1[strcspn(n1, "\n")] = 0;
    // n2[strcspn(n2, "\n")] = 0;

    strcat(n1, n2);  // Concatenate n2 to n1

    printf("%s\n", n1);
    
    return 0;
}
