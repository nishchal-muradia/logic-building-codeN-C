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
    // Question 15: Print a binary triangle with continuous 1 and 0 values.
    int rows = 5;
    int value = 1;

    for (int row = 1; row <= rows; row++) {
        for (int column = 1; column <= row; column++) {
            printf("%g", (double)(value));
            printf("%s", " ");
            value = 1 - value;
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
