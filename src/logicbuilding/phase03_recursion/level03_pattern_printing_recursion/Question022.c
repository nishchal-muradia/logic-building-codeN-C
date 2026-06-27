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

void printStarSquare(int rows, int columns) {
    if (rows == 0) return;
    printStars(columns);
    printf("\n");
    printStarSquare(rows - 1, columns);
}

int main(void) {
    // Question 22: : Print a square of stars recursively (n x n).
    printStarSquare(5, 5);
    return 0;
}

/*
 * Explanation:
 * The values `5, 5` passed to `printStarSquare` set the starting point and stopping limit for the recursive logic.
 * Inside `printStarSquare`, the condition `rows == 0` is the base case; it stops the repeated recursive calls.
 * The recursive call `printStarSquare(rows - 1, columns)` moves the work toward the base case by changing the argument each time.
 * One value is printed before the next recursive call, so the output is built step by step.
 */
