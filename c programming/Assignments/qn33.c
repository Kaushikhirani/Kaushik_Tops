#include <stdio.h>

void main() {
    int arr[10], i, max;
    printf("Enter ten elements:\n");
    for(i=0; i<10; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for(i=1; i<10; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Maximum number: %d\n", max);
    
}