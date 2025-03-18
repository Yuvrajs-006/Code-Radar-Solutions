#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "C is awesome";
    char *token = strtok(str, " ");  // First call with string
    int c=0;
    while (token != NULL) {
        c++;
        
        token = strtok(NULL, " ");  // Next call with NULL
    }
    printf("%d",c);
    return 0;
}
