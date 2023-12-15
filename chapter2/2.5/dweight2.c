/* Name: dweight.c
 * Purpose: Calculates the dimmensional weight of a box based on user input
 * Author: Jonathan R.G.
 * */
#include <stdio.h>

int main(void) {
  int height, length, width, volume, weight;

  printf("Enter height: ");
  scanf("%d", &height);
  printf("Enter length: ");
  scanf("%d", &length);
  printf("Enter width: ");
  scanf("%d", &width);

  volume = height * length * width;
  weight = (volume + 165) / 166;

  printf("Dimensions (inches): %d X %d X %d\n", height, length, width);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimmensional Weigth (pounds): %d\n", weight);
}
