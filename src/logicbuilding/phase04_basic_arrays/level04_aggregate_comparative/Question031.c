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
    // Question 31: : Compare two arrays - check if they are equal (same elements & order).
    int first[] = {1, 2, 3};
    int second[] = {1, 2, 3};
    bool equal = first.length == second.length;
    for (int i = 0; i < first.length && equal; i++) if (first[i] != second[i]) equal = false;
    printf("%s", (equal ? "Equal" : "Not equal"));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `equal`, `first`, and `second` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int i = 0`, keeps running while `i < first.length && equal` is true, and updates using `i++`.
 * The condition `first[i] != second[i]` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
