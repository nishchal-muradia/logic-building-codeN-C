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
    // Question 47: : Find common elements between two arrays.
    int first[] = {1, 2, 3, 4};
    int second[] = {3, 4, 5};
    for (int __i_a = 0; __i_a < (int)(sizeof(first) / sizeof(first[0])); __i_a++) { int a = first[__i_a];
        for (int __i_b = 0; __i_b < (int)(sizeof(second) / sizeof(second[0])); __i_b++) { int b = second[__i_b];
            if (a == b) printf("%d\n", (int)(a));
        }
    }
    return 0;
}

/*
 * Explanation:
 * The variables `first`, and `second` hold the values that the logic checks, counts, or transforms.
 * The loop repeats the same check or calculation for every required value.
 * The condition `a == b` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
