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
    // Question 10: Print Stars and Spaces Alternating (Stars and Blank Spaces).
    int rows = 5;

    for (int row = 1; row <= rows; row++) {
        for (int space = 1; space <= rows - row; space++) {
            printf("%s", " ");
        }

        for (int star = 1; star <= row; star++) {
            printf("%s", "*");
            if (star < row) {
                printf("%s", " ");
            }
        }
        printf("\n");
    }
    return 0;
}

/*
 * Explanation:
 * The outer loop controls how many rows are printed.
 * The first inner loop prints the leading blank spaces so the pattern is right-aligned.
 * The second inner loop prints stars, and it prints one blank space after each star except the last star in that row.
 */
