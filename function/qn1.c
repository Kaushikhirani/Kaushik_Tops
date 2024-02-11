#include <stdio.h>




int main() 
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
int findMax(int arr[], int size) {
    int max = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }

    return max;
}

        int maxNumber = findMax(arr, size);

    printf("The maximum number in the array is: %d\n", maxNumber);

    return 0;
}
