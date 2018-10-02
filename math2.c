#include <stdio.h>

int main()
{
  int radius;
  printf("Please enter a radius: "); // print to screen to prompt for input.
  scanf("%i", &radius); // user input.

  double area = 3.14159 * (radius * radius); // requires "double" for decimal points.

  printf("The area is: %f\n", area); // use %f instead of %i for floating point math.
  // printf("The given radius is: %i\n", radius);
  return 0;
}