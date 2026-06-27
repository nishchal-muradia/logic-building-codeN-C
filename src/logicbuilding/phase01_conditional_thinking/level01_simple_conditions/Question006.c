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
    // Question 6: : Take two numbers and print the larger one.
    int first = 20;
    int second = 35;
    if (first > second) printf("%d\n", (int)(first));
    else printf("%d\n", (int)(second));
    return 0;
}

/*
 * Explanation:
 * The variables `first`, and `second` hold the values that the logic checks, counts, or transforms.
 * The condition `first > second` decides whether the current value matches the requirement.
 * Only the branch whose condition becomes true prints its message.
 */
