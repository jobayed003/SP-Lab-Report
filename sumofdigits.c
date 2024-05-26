#include <stdio.h>

int main() {
  int n, sum = 0;

  printf("Enter a non-negative integer: ");
  scanf("%d", &n);

  if (n < 0) {
    printf("The number is negative. Please enter a non-negative integer.\n");
  } else {
    while (n > 0) {
      sum += n % 10; 
      n /= 10;
    }

    printf("The sum of the digits is: %d\n", sum);
  }

  return 0;
}