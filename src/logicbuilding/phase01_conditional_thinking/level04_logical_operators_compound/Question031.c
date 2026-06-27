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
    // Question 31: : Take a character and check if it is a letter, a digit, or neither.
    char ch = '9';
    if (isalpha(ch)) printf("%s\n", "Letter");
    else if (isdigit(ch)) printf("%s\n", "Digit");
    else printf("%s\n", "Neither");
    return 0;
}

/*
 * Explanation:
 * The value stored in `ch` is the input that the conditions or loops work on.
 * The if/else checks test the important cases in order: `isalpha(ch)`, `isdigit(ch)`.
 * Only the branch whose condition becomes true prints its message.
 */
