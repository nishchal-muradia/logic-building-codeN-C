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
    // Question 50: : Take a year and print the corresponding century (e.g., "19th century", "20th century").
    int year = 1998;
    int century = (year + 99) / 100;
    printf("%g", (double)(century));
    printf("%s", "th century");
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `year`, and `century` hold the values that the logic checks, counts, or transforms.
 * The calculated answer is printed after the logic produces the final value.
 */
