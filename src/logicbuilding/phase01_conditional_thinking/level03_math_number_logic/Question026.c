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
    // Question 26: : Take coordinates (x, y) and determine which quadrant the point lies in.
    int x = -4, y = 6;
    if (x > 0 && y > 0) printf("%s\n", "Quadrant I");
    else if (x < 0 && y > 0) printf("%s\n", "Quadrant II");
    else if (x < 0 && y < 0) printf("%s\n", "Quadrant III");
    else if (x > 0 && y < 0) printf("%s\n", "Quadrant IV");
    else printf("%s\n", "Point lies on an axis or origin");
    return 0;
}

/*
 * Explanation:
 * The value stored in `x` is the input that the conditions or loops work on.
 * The if/else checks test the important cases in order: `x > 0 && y > 0`, `x < 0 && y > 0`, `x < 0 && y < 0`.
 * Only the branch whose condition becomes true prints its message.
 */
