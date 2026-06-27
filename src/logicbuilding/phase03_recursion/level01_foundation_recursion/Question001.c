#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

void printIncreasing(int current, int n) {
    if (current > n) return;
    printf("%g", (double)(current));
    printf("\n");
    printIncreasing(current + 1, n);
}

int main(void) {
    // Question 1: : Print numbers from 1 to n using recursion.
    printIncreasing(1, 5);
    return 0;
}

/*
 * Explanation:
 * The values `1, 5` passed to `printIncreasing` set the starting point and stopping limit for the recursive logic.
 * Inside `printIncreasing`, the condition `current > n` is the base case; it stops the repeated recursive calls.
 * The recursive call `printIncreasing(current + 1, n)` moves the work toward the base case by changing the argument each time.
 * One value is printed before the next recursive call, so the output is built step by step.
 */
