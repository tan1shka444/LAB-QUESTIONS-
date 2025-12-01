#include <stdio.h>

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    // Transpose
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++){
            int t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }

    // Reverse each row
    for(int i=0;i<n;i++)
        for(int j=0;j<n/2;j++){
            int t=a[i][j];
            a[i][j]=a[i][n-j-1];
            a[i][n-j-1]=t;
        }

    printf("Rotated Matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    return 0;
}