#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n], left[n], right[n], result[n];

    printf("Enter array: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    left[0] = 1;
    for(int i=1; i<n; i++)
        left[i] = left[i-1] * arr[i-1];

    right[n-1] = 1;
    for(int i=n-2; i>=0; i--)
        right[i] = right[i+1] * arr[i+1];

    for(int i=0; i<n; i++)
        result[i] = left[i] * right[i];

    printf("Output: ");
    for(int i=0; i<n; i++)
        printf("%d ", result[i]);

    return 0;
}