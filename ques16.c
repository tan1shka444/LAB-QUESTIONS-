#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int maxProd = arr[0], minProd = arr[0], ans = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] < 0){
            int temp = maxProd;
            maxProd = minProd;
            minProd = temp;
        }

        maxProd = (arr[i] > arr[i] * maxProd) ? arr[i] : arr[i] * maxProd;
        minProd = (arr[i] < arr[i] * minProd) ? arr[i] : arr[i] * minProd;

        if(maxProd > ans) ans = maxProd;
    }

    printf("Maximum product = %d", ans);
    return 0;
}