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
    // Question 24: : Check whether a given integer is single-digit, double-digit, or multi-digit.
    int number = 87;
    int value = abs(number);
    if (value <= 9) printf("%s\n", "Single-digit");
    else if (value <= 99) printf("%s\n", "Double-digit");
    else printf("%s\n", "Multi-digit");
    return 0;
}

/*
 * Explanation:
 * The variables `number`, and `value` hold the values that the logic checks, counts, or transforms.
 * The if/else checks test the important cases in order: `value <= 9`, `value <= 99`.
 * Only the branch whose condition becomes true prints its message.
 */
