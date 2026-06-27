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
    // Question 14: : Check if one of two given numbers is a multiple of the other.
    int first = 12, second = 36;
    if (first != 0 && second % first == 0) printf("%s\n", "Second is a multiple of first");
    else if (second != 0 && first % second == 0) printf("%s\n", "First is a multiple of second");
    else printf("%s\n", "No number is a multiple of the other");
    return 0;
}

/*
 * Explanation:
 * The value stored in `first` is the input that the conditions or loops work on.
 * The if/else checks test the important cases in order: `first != 0 && second % first == 0`, `second != 0 && first % second == 0`.
 * Only the branch whose condition becomes true prints its message.
 */
