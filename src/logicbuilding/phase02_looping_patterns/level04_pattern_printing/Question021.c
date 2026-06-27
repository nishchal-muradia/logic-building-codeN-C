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
    // Question 21: Print a centered palindrome number pyramid.
    int rows = 5;

    for (int row = 1; row <= rows; row++) {
        for (int space = 1; space <= rows - row; space++) {
            printf("%s", " ");
        }
        for (int number = 1; number <= row; number++) {
            printf("%g", (double)(number));
        }
        for (int number = row - 1; number >= 1; number--) {
            printf("%g", (double)(number));
        }
        printf("\n");
    }
    return 0;
}

/*
 * Explanation:
 * We reverse the number by taking one digit at a time from the end.
 * After the reverse is ready, the code compares it with the original number.
 * If both values are equal, the number reads the same forward and backward, so it is a palindrome.
 */
