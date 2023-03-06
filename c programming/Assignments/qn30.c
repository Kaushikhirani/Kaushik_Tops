#include <stdio.h>

void main() {
    int arr[5], i;
    printf("Enter five elements:\n");
    for(i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Elements you entered are: ");
    for(i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }
   
}