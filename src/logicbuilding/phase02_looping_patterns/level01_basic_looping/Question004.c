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
    // Question 4: : Print numbers from 10 down to 1.
    for (int number = 10; number >= 1; number--) printf("%d\n", (int)(number));
    return 0;
}

/*
 * Explanation:
 * The value stored in `number` is the input that the conditions or loops work on.
 * The `for` loop starts with `int number = 10`, keeps running while `number >= 1` is true, and updates using `number--`.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
