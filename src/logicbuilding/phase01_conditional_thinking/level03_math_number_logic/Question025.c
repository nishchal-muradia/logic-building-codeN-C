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
    // Question 25: : Check if a number is a multiple of 7 or ends with 7.
    int number = 147;
    if (number % 7 == 0 || abs(number) % 10 == 7) printf("%s\n", "Matches condition");
    else printf("%s\n", "Does not match condition");
    return 0;
}

/*
 * Explanation:
 * The value stored in `number` is the input that the conditions or loops work on.
 * The condition `number % 7 == 0 || Math.abs(number) % 10 == 7` decides whether the current value matches the requirement.
 * Only the branch whose condition becomes true prints its message.
 */
