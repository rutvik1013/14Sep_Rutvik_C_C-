#include <stdio.h>

int main() {
    int i, n;
    int min, max;
    int a[20];

    printf("Enter number of elements in the array:\n");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("Enter element:\n");
        scanf("%d", &a[i]);
    }
   
    min = max = a[0];
    
    for (i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }

    // Print the result
    printf("Maximum Array: %d\n", max);
    printf("Minimum Array: %d\n", min);

    return 0;
}

