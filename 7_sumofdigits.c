#include <stdio.h>

int main() {
  int n, sum = 0,div= 10;

  printf("Enter an integer: ");
  scanf("%d", &n);

  if (n < 0) {
    printf("The number is negative. Please enter a positive integer.");
  } else {
    while (n > 0) {
      sum += n % div; 
      n /= div;
    }

    printf("The sum of the digits is: %d\n", sum);
  }

  return 0;
}