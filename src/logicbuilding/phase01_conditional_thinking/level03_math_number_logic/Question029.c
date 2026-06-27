#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

int main(void) {
    // Question 29: : Take two angles of a triangle and compute the third angle.
    int firstAngle = 50;
    int secondAngle = 60;
    int thirdAngle = 180 - firstAngle - secondAngle;
    printf("%s", "Third angle = ");
    printf("%g", (double)(thirdAngle));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `firstAngle`, `secondAngle`, and `thirdAngle` hold the values that the logic checks, counts, or transforms.
 * The calculated answer is printed after the logic produces the final value.
 */
