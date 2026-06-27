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
    // Question 11: Print Numbers in an Increasing Sequence (1, 12, 123, 1234, 12345).
    int rows = 5;

    for (int row = 1; row <= rows; row++) {
        for (int number = 1; number <= row; number++) {
            printf("%g", (double)(number));
        }
        printf("\n");
    }
    return 0;
}

/*
 * Explanation:
 * We use a counter variable to represent the current number.
 * The loop prints the counter while it stays inside the required range.
 * After every print, the counter changes so the loop can move toward the ending value.
 */
