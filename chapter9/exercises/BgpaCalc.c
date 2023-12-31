#include <stdio.h>

float computeGPA(char grades[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    switch (grades[i]) {
    case 'A':
      sum += 4;
      break;
    case 'B':
      sum += 3;
      break;
    case 'C':
      sum += 2;
      break;
    case 'D':
      sum += 1;
      break;
    case 'F':
      sum += 0;
      break;
    }
  }

  return (double)sum / n;
}

int main(void) {
    char grades[5] = { 'A', 'B', 'F', 'B', 'A' };
    int length = 5;

    printf("Average GPA of");
    for (int i = 0; i < length; i++) {
        printf(" %c", grades[i]);
    }
    printf(": %.2f\n", computeGPA(grades, length));




    return 0; }
