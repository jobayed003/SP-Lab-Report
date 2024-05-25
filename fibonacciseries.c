#include <stdio.h>

int main() {
  int n, i;
  int first = 0, second = 1, nextNum;

  printf("Enter the range: ");
  scanf("%d", &n);

  printf("Fibonacci sequence up to the %d-th term:\n", n);
  printf("%d, %d", first, second);

  for (i = 2; i < n; ++i) {
    nextNum = first + second;
    first = second;
    second = nextNum;
    printf(", %d", nextNum);
  }
  return 0;
}