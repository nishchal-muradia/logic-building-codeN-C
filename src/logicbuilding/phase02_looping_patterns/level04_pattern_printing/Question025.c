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
    // Question 25: Print the centered number pattern 5, 545, 54345, 5432345, 543212345.
    int rows = 5;

    for (int row = 1; row <= rows; row++) {
        for (int space = 1; space <= rows - row; space++) {
            printf("%s", " ");
        }

        int start = rows - row + 1;
        for (int number = rows; number >= start; number--) {
            printf("%g", (double)(number));
        }
        for (int number = start + 1; number <= rows; number++) {
            printf("%g", (double)(number));
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
