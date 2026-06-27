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
    // Question 46: : Take three numbers and check if they are in geometric progression.
    int a = 3, b = 9, c = 27;
    if (b * b == a * c) printf("%s\n", "Geometric progression");
    else printf("%s\n", "Not a geometric progression");
    return 0;
}

/*
 * Explanation:
 * The value stored in `a` is the input that the conditions or loops work on.
 * The condition `b * b == a * c` decides whether the current value matches the requirement.
 * Only the branch whose condition becomes true prints its message.
 */
