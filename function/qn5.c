#include <stdio.h>

void sort(int arr[], int n) 
{
  int i, j, temp;
  for (i = 0; i < n - 1; i++)
   {
    for (j = 0; j < n - i - 1; j++)
	 {
      if (arr[j] > arr[j + 1])
	   {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
         }
         }
}

int main()
 {
  int n1, n2, i, choice;
  printf("Enter the size of the first array: ");
  scanf("%d", &n1);
  int arr1[n1];
  printf("Enter the elements of the first array: ");
  for (i = 0; i < n1; i++)
   {
    scanf("%d", &arr1[i]);
  }

  printf("Enter the size of the second array: ");
  scanf("%d", &n2);
  int arr2[n2];
  printf("Enter the elements of the second array: ");
  for (i = 0; i < n2; i++)
   {
    scanf("%d", &arr2[i]);
  }

  printf("Enter your choice: 1 for ascending and 2 for descending: ");
  scanf("%d", &choice);

  if (choice == 1)
   {
    sort(arr1, n1);
    sort(arr2, n2);
  } else if (choice == 2)
   {
    sort(arr1, n1);
    sort(arr2, n2);
    for (i = 0; i < n1 / 2; i++)
	 {
      int temp = arr1[i];
      arr1[i] = arr1[n1 - i - 1];
      arr1[n1 - i - 1] = temp;
    }
    for (i = 0; i < n2 / 2; i++)
	 {
      int temp = arr2[i];
      arr2[i] = arr2[n2 - i - 1];
      arr2[n2 - i - 1] = temp;
    }
  } else {
    printf("Invalid choice.\n");
    return 1;
  }

  printf("The sorted arrays are:\n");
  printf("First array: ");
  for (i = 0; i < n1; i++)
   {
    printf("%d ", arr1[i]);
  }
  printf("\n");

  printf("Second array: ");
  for (i = 0; i < n2; i++)
   {
    printf("%d ", arr2[i]);
  }
  printf("\n");

  return 0;
}