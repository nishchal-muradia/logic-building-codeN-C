#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

void printNumberPattern(int row, int n) {
    if (row > n) return;
    for (int i = 1; i <= row; i++) { printf("%d", (int)(i)); printf("%s", " "); }
    printf("\n");
    printNumberPattern(row + 1, n);
}

int main(void) {
    // Question 25: : Print pattern of numbers recursively (1 to n each row).
    printNumberPattern(1, 5);
    return 0;
}

/*
 * Explanation:
 * The values `1, 5` passed to `printNumberPattern` set the starting point and stopping limit for the recursive logic.
 * Inside `printNumberPattern`, the condition `row > n` is the base case; it stops the repeated recursive calls.
 * The recursive call `printNumberPattern(row + 1, n)` moves the work toward the base case by changing the argument each time.
 * Inside each recursive step, the loop starts with `int i = 1`, runs while `i <= row` is true, and updates with `i++` to print that row.
 */
