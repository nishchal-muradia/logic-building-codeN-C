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
    // Question 10: : Take a character and check whether it's uppercase, lowercase, a digit, or a special character.
    char ch = 'A';
    if (isupper(ch)) printf("%s\n", "Uppercase");
    else if (islower(ch)) printf("%s\n", "Lowercase");
    else if (isdigit(ch)) printf("%s\n", "Digit");
    else printf("%s\n", "Special character");
    return 0;
}

/*
 * Explanation:
 * The value stored in `ch` is the input that the conditions or loops work on.
 * The if/else checks test the important cases in order: `isupper(ch)`, `islower(ch)`, `isdigit(ch)`.
 * Only the branch whose condition becomes true prints its message.
 */
