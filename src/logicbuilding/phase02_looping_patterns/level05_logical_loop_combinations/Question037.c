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
    // Question 37: : Print a pattern where each row i prints i*i.
    int rows = 5;
    for (int row = 1; row <= rows; row++) {
        for (int col = 1; col <= row; col++) { printf("%d", (int)((row * row))); printf("%s", " "); }
        printf("\n");
    }
    return 0;
}

/*
 * Explanation:
 * The value stored in `rows` is the input that the conditions or loops work on.
 * The outer loop controls each row of the pattern, and the inner loop controls what gets printed inside that row.
 * After one row is printed, `System.out.println()` moves the cursor to the next line.
 * `System.out.println()` is used only to move to the next line after the pattern output is complete.
 */
