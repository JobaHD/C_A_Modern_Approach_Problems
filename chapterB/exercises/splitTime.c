#include <stdio.h>

void splitTime(long totalTime, int *hr, int *min, int *sec);

int main(void) {
    long totalSec = 43343;
    int sec, min, hr;

    splitTime(totalSec, &hr, &min, &sec);

    printf("%ld to hr/min/sec: %d, %d, %d\n", totalSec, hr, min, sec);

    return 0;
}

void splitTime(long totalTime, int *hr, int *min, int *sec) {
    *hr = totalTime / 3600;
    *min = (totalTime - (*hr * 3600)) / 60;
    *sec = totalTime - (*hr * 3600) - (*min * 60);
}
