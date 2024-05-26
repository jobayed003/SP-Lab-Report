#include <stdio.h>

int main() {
  int size, element;

  printf("Enter the number of elements in the array: ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter the elements of the array:\n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Enter the element to search for: ");
  scanf("%d", &element);

  for (int i = 0; i < size; i++) {
    if (arr[i] == element) {
      printf("Element %d found at index %d.", element, i);
      return 0;
    }
  }

  printf("%d is not found in the array.", element);

  return 0;
}
