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

int main(void) {
    // Question 21: : Print a line of n stars recursively.
    printStars(5);
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The values `5` passed to `printStars` set the starting point and stopping limit for the recursive logic.
 * Inside `printStars`, the condition `n == 0` is the base case; it stops the repeated recursive calls.
 * The recursive call `printStars(n - 1)` moves the work toward the base case by changing the argument each time.
 * One value is printed before the next recursive call, so the output is built step by step.
 * `System.out.println()` is used only to move to the next line after the pattern output is complete.
 */
