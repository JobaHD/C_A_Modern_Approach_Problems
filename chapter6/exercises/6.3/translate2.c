#include <stdio.h>

int main(void) {
  for (int i = 9834; i > 0; i /= 10) {
    printf("%d ", i);
  }
}
