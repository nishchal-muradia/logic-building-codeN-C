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
    // Question 17: : Take two numbers and determine whether both are even, both are odd, or one is even and one is odd.
    int first = 12, second = 18;
    if (first % 2 == 0 && second % 2 == 0) printf("%s\n", "Both are even");
    else if (first % 2 != 0 && second % 2 != 0) printf("%s\n", "Both are odd");
    else printf("%s\n", "One is even and one is odd");
    return 0;
}

/*
 * Explanation:
 * The value stored in `first` is the input that the conditions or loops work on.
 * The if/else checks test the important cases in order: `first % 2 == 0 && second % 2 == 0`, `first % 2 != 0 && second % 2 != 0`.
 * Only the branch whose condition becomes true prints its message.
 */
