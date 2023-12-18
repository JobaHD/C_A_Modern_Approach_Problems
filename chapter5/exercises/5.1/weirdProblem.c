/* What is the point? */
/* Update: Nvmd, I'm dumb, this shit is so hard*/
/* Goal: print -1 if i < j, print 0 if i == j, print 1 if i > j; */

#include <stdio.h>

int main(void) {
  int i, j;
  i = 3;
  j = 5;

  int result = (i > j) - (i < j);

  printf("%d", result);
  return 0;
}
