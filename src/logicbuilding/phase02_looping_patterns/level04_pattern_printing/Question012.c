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
    // Question 12: Print Repeated Numbers per Row (Same Number Repeated).
    int rows = 5;

    for (int row = 1; row <= rows; row++) {
        for (int column = 1; column <= row; column++) {
            printf("%g", (double)(row));
        }
        printf("\n");
    }
    return 0;
}

/*
 * Explanation:
 * We set sample values at the top of the program so the question can run directly.
 * The loop repeats the required work and conditionals decide which values should be processed.
 * The final output is printed after the loop has completed the required logic.
 */
