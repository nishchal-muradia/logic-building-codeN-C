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
    // Question 14: Print a continuous digit triangle that wraps after 9.
    int rows = 7;
    int digit = 1;

    for (int row = 1; row <= rows; row++) {
        for (int column = 1; column <= row; column++) {
            printf("%g", (double)(digit));
            printf("%s", " ");
            digit++;
            if (digit == 10) {
                digit = 0;
            }
        }
        printf("\n");
    }
    return 0;
}

/*
 * Explanation:
 * The outer loop controls the rows of the pattern.
 * Inner loops print the required spaces, stars, numbers, or letters for each row.
 * After each row is complete, System.out.println() moves the output to the next line.
 */
