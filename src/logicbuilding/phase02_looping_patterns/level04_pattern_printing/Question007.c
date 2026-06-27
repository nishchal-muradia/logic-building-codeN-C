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
    // Question 7: Print Stars in Even Numbers (2, 4, 6, 8, 10).
    for (int stars = 2; stars <= 10; stars += 2) {
        for (int count = 1; count <= stars; count++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    return 0;
}

/*
 * Explanation:
 * We use the modulo operator to check whether a value is even.
 * A value is even when dividing by 2 leaves remainder 0.
 * The code prints, counts, or adds only the values that satisfy that condition.
 */
