#include <stdio.h>
#define PI 3.14

int main(void) {
  float radius = 10.0f;
  float volume = (4.0f / 3.0f) * PI * radius * radius * radius;

  printf("Volume of a sphere with radius (%.0f m): %.2f cubic meters\n", radius, volume);

  return 0;
}
