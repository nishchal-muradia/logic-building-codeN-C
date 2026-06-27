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
    // Question 33: : Take three numbers and print the median value (neither maximum nor minimum).
    int a = 12, b = 5, c = 20;
    int median;
    if ((a >= b && a <= c) || (a >= c && a <= b)) median = a;
    else if ((b >= a && b <= c) || (b >= c && b <= a)) median = b;
    else median = c;
    printf("%s", "Median = ");
    printf("%g", (double)(median));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `a` is the input that the conditions or loops work on.
 * The if/else checks test the important cases in order: `(a >= b && a <= c) || (a >= c && a <= b)`, `(b >= a && b <= c) || (b >= c && b <= a)`.
 * Only the branch whose condition becomes true prints its message.
 */
