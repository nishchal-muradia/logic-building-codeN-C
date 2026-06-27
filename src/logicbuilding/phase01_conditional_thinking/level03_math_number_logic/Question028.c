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
    // Question 28: : Check if a number lies within the range [100, 999].
    int number = 456;
    if (number >= 100 && number <= 999) printf("%s\n", "Inside range");
    else printf("%s\n", "Outside range");
    return 0;
}

/*
 * Explanation:
 * The value stored in `number` is the input that the conditions or loops work on.
 * The condition `number >= 100 && number <= 999` decides whether the current value matches the requirement.
 * Only the branch whose condition becomes true prints its message.
 */
