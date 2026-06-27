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
    // Question 35: : Find elements that are in one array but not in the other.
    int first[] = {1, 2, 3, 4};
    int second[] = {3, 4, 5};
    for (int __i_a = 0; __i_a < (int)(sizeof(first) / sizeof(first[0])); __i_a++) { int a = first[__i_a];
        bool found = false;
        for (int __i_b = 0; __i_b < (int)(sizeof(second) / sizeof(second[0])); __i_b++) if (a == b) found = true;
        if (!found) printf("%d\n", (int)(a));
    }
    return 0;
}

/*
 * Explanation:
 * The variables `first`, and `second` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int a : first) { bool found = false`, keeps running while `for (int __i_b = 0; __i_b < (int)(sizeof(second) / sizeof(second[0])); __i_b++) if (a == b) found = true` is true, and updates using `if (!found`.
 * The bool `found` starts as false and becomes true as soon as the searched value is seen.
 * The if/else checks test the important cases in order: `a == b`, `!found`.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
