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
    // Question 8: : Compare two strings lexicographically (like dictionary order).
    char *first = "apple";
    char *second = "banana";
    int result = first.compareTo(second);
    printf("%g", (double)(result < 0 ? "First comes earlier" : result > 0 ? "Second comes earlier" : "Both are equal"));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `first`, and `second` hold the values that the logic checks, counts, or transforms.
 * The calculated answer is printed after the logic produces the final value.
 */
