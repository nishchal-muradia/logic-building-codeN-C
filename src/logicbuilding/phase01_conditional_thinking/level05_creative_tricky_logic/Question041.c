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
    // Question 41: : Take coordinates (x, y) and check if the point lies on the X-axis, Y-axis, or at the origin.
    int x = 0, y = 5;
    if (x == 0 && y == 0) printf("%s\n", "Origin");
    else if (y == 0) printf("%s\n", "X-axis");
    else if (x == 0) printf("%s\n", "Y-axis");
    else printf("%s\n", "Not on an axis");
    return 0;
}

/*
 * Explanation:
 * The value stored in `x` is the input that the conditions or loops work on.
 * The if/else checks test the important cases in order: `x == 0 && y == 0`, `y == 0`, `x == 0`.
 * Only the branch whose condition becomes true prints its message.
 */
