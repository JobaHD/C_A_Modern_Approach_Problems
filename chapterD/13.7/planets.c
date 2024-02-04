#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9
char *planets[] = {"Mercury", "Venus",  "Earth",   "Mars", "Jupiter",
                   "Saturn",  "Uranus", "Neptune", "Pluto"};

int isPlanet(const char str[]);

int main(int argc, char *argv[]) {
  if (argc < 2) {
    return 1;
  }

  char **p = argv;
  while (*++p != NULL) {
    int planetNum = isPlanet(*p);
    if (planetNum) {
      printf("%s is planet %d\n", *p, planetNum);
    } else {
      printf("%s is not planet \n", *p);
    }
  }

  return 0;
}

int isPlanet(const char str[]) {
  for (int i = 0; i < NUM_PLANETS; i++) {
    if (strcmp(str, planets[i]) == 0) {
      return i + 1;
    }
  }
  return 0;
}
