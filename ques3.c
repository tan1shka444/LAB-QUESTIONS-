#include <stdio.h>
int value = 100;

void print_values() {
    // Local variable 'value' within this function
    int value = 50;
    printf("Inside print_values function:\n");
    printf("  Local variable 'value': %d\n", value);
    
    // Accessing the global variable using 'extern' within a block
    {
        extern int value; // Declares that 'value' refers to the global variable
        printf("  Global variable 'value' (accessed with extern): %d\n", value);
    }
}

int main() {
    printf("Outside any function (in main):\n");
    printf("  Global variable 'value': %d\n", value);

    print_values();

    printf("Back in main after function call:\n");
    printf("  Global variable 'value': %d\n", value);

    return 0;
}
