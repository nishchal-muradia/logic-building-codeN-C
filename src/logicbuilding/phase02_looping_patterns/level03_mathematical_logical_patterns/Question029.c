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
    // Question 29: : Print first n terms of an arithmetic progression (a, d).
    int n = 5, firstTerm = 3, difference = 4;
    for (int i = 0; i < n; i++) printf("%d\n", (int)(firstTerm + i * difference));
    return 0;
}

/*
 * Explanation:
 * The value stored in `n` is the input that the conditions or loops work on.
 * The `for` loop starts with `int i = 0`, keeps running while `i < n` is true, and updates using `i++`.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
