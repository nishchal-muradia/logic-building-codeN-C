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
    // Question 12: : If the sides form a valid triangle, determine whether it is equilateral, isosceles, or scalene.
    int a = 5, b = 5, c = 8;
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) printf("%s\n", "Equilateral");
        else if (a == b || b == c || a == c) printf("%s\n", "Isosceles");
        else printf("%s\n", "Scalene");
    } else {
        printf("%s", "Invalid triangle");
        printf("\n");
    }
    return 0;
}

/*
 * Explanation:
 * The value stored in `a` is the input that the conditions or loops work on.
 * The if/else checks test the important cases in order: `a + b > c && a + c > b && b + c > a`, `a == b && b == c`, `a == b || b == c || a == c`.
 * Only the branch whose condition becomes true prints its message.
 */
