#include <stdio.h>

int main(void) {

  printf("%d\n", 'A');
  printf("%d\n", 0b1000001);
  //illegal, number is interpreted as octal with decimal value 521
  printf("%d\n", 01011);
  printf("%d\n", 0x41);

    return 0;
}
