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
    // Question 4: Print Square of Stars (n x n Stars).
    int n = 5;

    for (int row = 1; row <= n; row++) {
        for (int column = 1; column <= n; column++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    return 0;
}

/*
 * Explanation:
 * We loop from 1 to n.
 * For every number, the code multiplies the number by itself.
 * The square value is printed before the loop moves to the next number.
 */
