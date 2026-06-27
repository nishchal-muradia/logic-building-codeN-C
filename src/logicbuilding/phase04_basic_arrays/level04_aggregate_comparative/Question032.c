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
    // Question 32: : Compare two arrays - check if they contain the same elements (ignore order).
    int first[] = {1, 2, 3};
    int second[] = {3, 2, 1};
    bool same = first.length == second.length;
    boolean[] used = new boolean[second.length];
    for (int i = 0; i < first.length && same; i++) {
        bool found = false;
        for (int j = 0; j < second.length; j++) {
            if (!used[j] && first[i] == second[j]) {
                used[j] = true;
                found = true;
                break;
            }
        }
        if (!found) same = false;
    }
    printf("%s", (same ? "Same elements" : "Different elements"));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `same`, `first`, `second`, and `used` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int i = 0`, keeps running while `i < first.length && same` is true, and updates using `i++`.
 * The bool `found` starts as false and becomes true as soon as the searched value is seen.
 * The if/else checks test the important cases in order: `!used[j] && first[i] == second[j]`, `!found`.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
