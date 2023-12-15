/* Name: dweight.c
 * Purpose: Calculates the dimmensional weight of a box
 * Author: Jonathan R.G.
 * */
#include <stdio.h>

int main(void) {
  int height = 12,
      length = 10,
      width = 8, volume;

  volume = height * length * width;

  printf("Dimensions (inches): %d X %d X %d\n", height, length, width);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimmensional Weigth (pounds): %d\n", (volume + 165) / 166);

  return 0;
}
