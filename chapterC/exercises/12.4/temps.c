#include <stdio.h>
#include <stdbool.h>

int temperatures[7][24] = { [2][5] = 10 };

bool search(const int a[], int n, int key);


int main(void) {
    bool found = search(temperatures[0], 168, 32);
    printf("Found: %d\n", found);

    return 0;
}

bool search(const int a[], int n, int key) {
  for (int *p = a; p < a + n; p++) {
    if (*p == key) {
      return true;
    }
  }
  return false;
}
