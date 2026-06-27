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
    // Question 1: : Take a number and print whether it's positive, negative, or zero.
    int number = -7;
    if (number > 0) printf("%s\n", "Positive");
    else if (number < 0) printf("%s\n", "Negative");
    else printf("%s\n", "Zero");
    return 0;
}

/*
 * Explanation:
 * The value stored in `number` is the input that the conditions or loops work on.
 * The if/else checks test the important cases in order: `number > 0`, `number < 0`.
 * Only the branch whose condition becomes true prints its message.
 */
