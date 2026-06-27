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
    // Question 31: : Print a multiplication table in a formatted grid (10x10).
    for (int row = 1; row <= 10; row++) {
        for (int col = 1; col <= 10; col++) printf("%4d", row * col);
        printf("\n");
    }
    return 0;
}

/*
 * Explanation:
 * The variables `row`, and `col` hold the values that the logic checks, counts, or transforms.
 * The outer loop controls each row of the pattern, and the inner loop controls what gets printed inside that row.
 * After one row is printed, `System.out.println()` moves the cursor to the next line.
 * `System.out.println()` is used only to move to the next line after the pattern output is complete.
 */
