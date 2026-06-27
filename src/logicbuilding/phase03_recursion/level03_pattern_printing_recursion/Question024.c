#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

void printStars(int n) {
    if (n == 0) return;
    printf("%s", "*");
    printStars(n - 1);
}

void printTriangleBottomUp(int row) {
    if (row == 0) return;
    printStars(row);
    printf("\n");
    printTriangleBottomUp(row - 1);
}

int main(void) {
    // Question 24: : Print a triangle of stars recursively (bottom-up).
    printTriangleBottomUp(5);
    return 0;
}

/*
 * Explanation:
 * The values `5` passed to `printTriangleBottomUp` set the starting point and stopping limit for the recursive logic.
 * Inside `printTriangleBottomUp`, the condition `row == 0` is the base case; it stops the repeated recursive calls.
 * The recursive call `printTriangleBottomUp(row - 1)` moves the work toward the base case by changing the argument each time.
 * One value is printed before the next recursive call, so the output is built step by step.
 */
