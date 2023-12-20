#include <stdio.h>

int main(void) {
  int gradeNum;

  printf("Enter a numerical grade: ");
  scanf("%d", &gradeNum);

  if (gradeNum < 0 || gradeNum > 100) {
    printf("Error: Invalid grade. Try a number within 0-100.");
    return 0;
  }

  printf("Letter grade: ");
  switch (gradeNum / 10) {
  case 9:
    printf("A");
    break;
  case 8:
    printf("B");
    break;
  case 7:
    printf("C");
    break;
  case 6:
    printf("D");
    break;
  case 5:
  case 4:
  case 3:
  case 2:
  case 1:
  case 0:
    printf("F");
    break;
  default:
    printf("Idk man, wtf is that grade");
    break;
  }
  printf(".\n");

  return 0;
}
