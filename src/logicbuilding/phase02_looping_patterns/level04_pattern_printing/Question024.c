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
    // Question 24: Print a centered diamond star pattern.
    int rows = 5;

    for (int row = 1; row <= rows; row++) {
        for (int space = 1; space <= rows - row; space++) {
            printf("%s", " ");
        }
        for (int star = 1; star <= 2 * row - 1; star++) {
            printf("%s", "*");
        }
        printf("\n");
    }

    for (int row = rows - 1; row >= 1; row--) {
        for (int space = 1; space <= rows - row; space++) {
            printf("%s", " ");
        }
        for (int star = 1; star <= 2 * row - 1; star++) {
            printf("%s", "*");
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
