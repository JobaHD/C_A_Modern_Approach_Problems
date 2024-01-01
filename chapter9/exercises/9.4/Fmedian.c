#include <stdio.h>

double median(double x, double y, double z);

int main(void) {
  float x = 10;
  float y = 5;
  float z = 0;

  printf("Median of %f, %f, and %f: %f\n", x, y, z, median(x, y, z));

  return 0;
}

double median(double x, double y, double z) {
  double middle = x;
  if ((y >= z && y <= x) || (y >= x && y <= z)) {
    middle = y;
  } else if ((z <= y && z >= x) || (z <= x && z >= y)) {
    middle = z;
  }

  return middle;
}
