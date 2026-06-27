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
    // Question 8: Print Stars in Odd Numbers (1, 3, 5, 7, 9).
    for (int stars = 1; stars <= 9; stars += 2) {
        for (int count = 1; count <= stars; count++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    return 0;
}

/*
 * Explanation:
 * We use the modulo operator to check whether a value is odd.
 * A value is odd when dividing by 2 does not leave remainder 0.
 * The code prints, counts, or adds only the values that satisfy that condition.
 */
