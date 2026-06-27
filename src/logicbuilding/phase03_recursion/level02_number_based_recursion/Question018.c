#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

void printEvenRecursive(int current, int n) {
    if (current > n) return;
    if (current % 2 == 0) printf("%d\n", (int)(current));
    printEvenRecursive(current + 1, n);
}

int main(void) {
    // Question 18: : Calculate the sum of first n even numbers recursively.
    printEvenRecursive(1, 10);
    return 0;
}

/*
 * Explanation:
 * The values `1, 10` passed to `printEvenRecursive` set the starting point and stopping limit for the recursive logic.
 * Inside `printEvenRecursive`, the condition `current > n` is the base case; it stops the repeated recursive calls.
 * The recursive call `printEvenRecursive(current + 1, n)` moves the work toward the base case by changing the argument each time.
 * One value is printed before the next recursive call, so the output is built step by step.
 */
