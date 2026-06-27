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
    // Question 27: : Print multiplication table of n recursively.
    int n = 7;
    for (int multiplier = 1; multiplier <= 10; multiplier++) {
        printf("%g", (double)(n));
        printf("%s", " x ");
        printf("%g", (double)(multiplier));
        printf("%s", " = ");
        printf("%g", (double)((n * multiplier)));
        printf("\n");
    }
    return 0;
}

/*
 * Explanation:
 * The variables `n`, and `multiplier` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int multiplier = 1`, keeps running while `multiplier <= 10` is true, and updates using `multiplier++`.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
