#include <stdio.h>

void main() {
    int arr[10], i, sum = 0;
    float avg;
    printf("Enter ten elements:\n");
    for(i=0; i<10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = (float) sum / 10;
    printf("Sum of the elements: %d\n", sum);
    printf("Average of the sum: %.2f\n", avg);
    
}