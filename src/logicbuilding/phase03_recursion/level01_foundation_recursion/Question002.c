#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

void printDecreasing(int n) {
    if (n == 0) return;
    printf("%g", (double)(n));
    printf("\n");
    printDecreasing(n - 1);
}

int main(void) {
    // Question 2: : Print numbers from n down to 1 using recursion.
    printDecreasing(5);
    return 0;
}

/*
 * Explanation:
 * The values `5` passed to `printDecreasing` set the starting point and stopping limit for the recursive logic.
 * Inside `printDecreasing`, the condition `n == 0` is the base case; it stops the repeated recursive calls.
 * The recursive call `printDecreasing(n - 1)` moves the work toward the base case by changing the argument each time.
 * One value is printed before the next recursive call, so the output is built step by step.
 */
