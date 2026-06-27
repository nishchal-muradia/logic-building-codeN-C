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
    // Question 18: : Take an alphabet character and check if it lies between 'a' and 'm' or 'n' and 'z'.
    char ch = 'h';
    if (ch >= 'a' && ch <= 'm') printf("%s\n", "Between a and m");
    else if (ch >= 'n' && ch <= 'z') printf("%s\n", "Between n and z");
    else printf("%s\n", "Not a lowercase alphabet");
    return 0;
}

/*
 * Explanation:
 * The value stored in `ch` is the input that the conditions or loops work on.
 * The if/else checks test the important cases in order: `ch >= 'a' && ch <= 'm'`, `ch >= 'n' && ch <= 'z'`.
 * Only the branch whose condition becomes true prints its message.
 */
