#include <stdio.h>

int main() {
  int temp, size, i;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter the elements of the array:\n");
  for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  // Sorting the array with bubble sort in ascending order.
  for (i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  int second_smallest = arr[1];
  int second_largest = arr[size - 2];

  if (second_smallest % 2 == 0) {
    second_smallest += 2;
  } else {
    second_smallest -= 2;
  }

  if (second_largest % 2 == 0) {
    second_largest *= 2;
  } else {
    second_largest /= 2;
  }

  arr[1] = second_smallest;
  arr[size - 2] = second_largest;

  printf("The modified array is: ");
  for (i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
