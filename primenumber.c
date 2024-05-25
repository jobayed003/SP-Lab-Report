#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
  if (num <= 1)
    return false;
  for (int i = 2; i * i <= num; ++i) {
    if (num % i == 0)
      return false;
  }
  return true;
}

int main() {
  int lower, upper;
  printf("Enter the lower limit (a): ");
  scanf("%d", &lower);
  printf("Enter the upper limit (n): ");
  scanf("%d", &upper);

  printf("Prime numbers between %d and %d:\n", lower, upper);
  for (int i = lower; i <= upper; ++i) {
    if (isPrime(i))
      printf("%d ", i);
  }
  printf("\n");

  return 0;
}