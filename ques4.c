#include <stdio.h>

int main() {
    int counter = 0;
    if (counter < 5) {
        while (counter < 3) {
            printf("Counter is: %d\n", counter);
            counter++;
        }
    }
    return 0;
}
