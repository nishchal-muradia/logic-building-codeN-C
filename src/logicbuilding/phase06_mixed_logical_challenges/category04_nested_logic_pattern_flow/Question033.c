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
    // Question 33: : Print all subarrays of a given array.
    int numbers[] = {1, 2, 3};
    for (int start = 0; start < numbers.length; start++) {
        for (int end = start; end < numbers.length; end++) {
            for (int i = start; i <= end; i++) { printf("%s", numbers[i]); printf("%s", " "); }
            printf("\n");
        }
    }
    return 0;
}

/*
 * Explanation:
 * The variables `start`, `end`, and `numbers` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int start = 0`, keeps running while `start < numbers.length` is true, and updates using `start++`.
 * `System.out.println()` is used only to move to the next line after the pattern output is complete.
 */
