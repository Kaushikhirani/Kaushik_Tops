#include <stdio.h>

void main() {
    int arr[10], i, odd_count = 0, even_count = 0;
    printf("Enter ten elements:\n");
    for(i=0; i<10; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) {
            even_count++;
        }
        else {
            odd_count++;
        }
    }
    printf("Total even numbers: %d\n", even_count);
    printf("Total odd numbers: %d\n", odd_count);
    
}