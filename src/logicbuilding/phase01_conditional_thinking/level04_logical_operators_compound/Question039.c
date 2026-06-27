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
    // Question 39: : Take electricity units consumed and calculate the bill as per slabs (using if-else).
    int units = 250;
    double bill;
    if (units <= 100) bill = units * 5;
    else if (units <= 200) bill = 100 * 5 + (units - 100) * 7;
    else bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    printf("%s", "Bill = ");
    printf("%g", (double)(bill));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `units` is the input that the conditions or loops work on.
 * The if/else checks test the important cases in order: `units <= 100`, `units <= 200`.
 * Only the branch whose condition becomes true prints its message.
 */
