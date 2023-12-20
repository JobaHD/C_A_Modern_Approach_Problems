#include <stdio.h>

int main(void) {
  int number;

  printf("Enter a two-digit number: ");
  scanf("%2d", &number);

  printf("You entered the number ");

  switch (number / 10) {
  case 1:
      switch (number % 10) {
          case 0: printf("ten.\n"); return 0;
          case 1: printf("eleven.\n"); return 0;
          case 2: printf("twelve.\n"); return 0;
          case 3: printf("thirteen.\n"); return 0;
      }
      break;
  case 2: printf("twenty"); break;
  case 3: printf("thirty"); break;
  case 4: printf("fourty"); break;
  case 5: printf("fifty"); break;
  case 6: printf("sixty"); break;
  case 7: printf("seventy"); break;
  case 8: printf("eighty"); break;
  case 9: printf("ninety"); break;
  }

  switch (number % 10) {
  case 1: printf("one"); break;
  case 2: printf("two"); break;
  case 3: printf("three"); break;
  case 4: printf("four"); break;
  case 5: printf("five"); break;
  case 6: printf("six"); break;
  case 7: printf("seven"); break;
  case 8: printf("eight"); break;
  case 9: printf("nine"); break;
  case 0: break;
  }

  if (number / 10  == 1) {
      printf("teen");
  }

  printf(".\n");

  return 0;
}
