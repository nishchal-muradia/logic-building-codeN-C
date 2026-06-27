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
    // Question 43: : Take day and month and check if it forms a valid calendar date (ignoring leap years).
    int year = 2024;
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) printf("%s\n", "Leap year");
    else printf("%s\n", "Not a leap year");
    return 0;
}

/*
 * Explanation:
 * The value stored in `year` is the input that the conditions or loops work on.
 * The condition `(year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)` decides whether the current value matches the requirement.
 * Only the branch whose condition becomes true prints its message.
 */
