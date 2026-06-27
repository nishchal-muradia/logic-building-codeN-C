#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

int recursiveSeriesStep(int n) {
    if (n == 0) return 0;
    int partial = recursiveSeriesStep(n - 1);
    printf("%g", (double)(partial));
    printf("%s", " + ");
    printf("%g", (double)(n));
    printf("%s", " = ");
    printf("%g", (double)((partial + n)));
    printf("\n");
    return partial + n;
}

int main(void) {
    // Question 29: : Print sum of series 1 + 2 + 3 + ... + n recursively and display each step.
    printf("%s", "Total = ");
    printf("%g", (double)(recursiveSeriesStep(5)));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The values `"Total = " + recursiveSeriesStep(5)` passed to `println` set the starting point and stopping limit for the recursive logic.
 * Inside `recursiveSeriesStep`, the condition `n == 0` is the base case; it stops the repeated recursive calls.
 * The recursive call `recursiveSeriesStep(n - 1)` moves the work toward the base case by changing the argument each time.
 * One value is printed before the next recursive call, so the output is built step by step.
 * The calculated answer is printed after the logic produces the final value.
 */
