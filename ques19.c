#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int count = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == ' ') count++;
    }

    printf("Word count = %d", count + 1);
    return 0;
}