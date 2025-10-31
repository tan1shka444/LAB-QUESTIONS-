#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], result[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        int product = 1;
        for (j = 0; j < n; j++) {
            if (i != j) {
                product *= arr[j];
            }
        }
        result[i] = product;
    }

    printf("Product of all other elements for each position:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    printf("\n");
    return 0;
}
