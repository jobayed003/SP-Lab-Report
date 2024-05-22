#include <stdio.h>

int main() {
  double radius, length, width, base, height, area;

  printf("Enter the radius of the circle: ");
  scanf("%lf", &radius);
  area = 3.1416 * radius * radius;
  printf("The area of circle is: %.2lf\n", area);

  printf("Enter the length and width of the rectangle: ");
  scanf("%lf %lf", &length, &width);
  area = length * width;
  printf("The area of rectangle is: %.2lf\n", area);

  printf("Enter base and height of the triangle: ");
  scanf("%lf %lf", &base, &height);
  area = 0.5 * base * height;
  printf("The area of triangle is: %.2lf\n", area);

  return 0;
}