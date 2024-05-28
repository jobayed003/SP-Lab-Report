#include <stdio.h>

int main() {
  int size, temp, i;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter the elements of the array:\n");
  for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  // Bubble sort to sort the array
  for (i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  printf("Sorted array:\n");
  for (i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}