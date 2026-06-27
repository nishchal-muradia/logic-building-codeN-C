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
    // Question 1: : Print numbers from 1 to 10.
    for (int number = 1; number <= 10; number++) printf("%d\n", (int)(number));
    return 0;
}

/*
 * Explanation:
 * The value stored in `number` is the input that the conditions or loops work on.
 * The `for` loop starts with `int number = 1`, keeps running while `number <= 10` is true, and updates using `number++`.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
