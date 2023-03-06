#include <stdio.h>

void sort(int *arr, int size) {
    int i, j, temp;

    // Sort the array using bubble sort algorithm
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1 - i; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void main()
 {
    int i, size;
    int arr[100];
    int *ptr;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Get the input elements from the user and store them in the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Assign the address of the first element of the array to the pointer
    ptr = arr;

    // Call the sort function to sort the array using pointers
    sort(ptr, size);

    // Display the sorted array using pointers
    printf("The sorted array is:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

   
}
