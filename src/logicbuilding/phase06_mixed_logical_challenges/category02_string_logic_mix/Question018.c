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
    // Question 18: : Check if two strings are rotations of each other.
    char *first = "abcd";
    char *second = "cdab";
    printf("%s", ((strlen(first) == strlen(second) && (first + first).contains(second)) ? "Rotation" : "Not rotation"));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `first`, and `second` hold the values that the logic checks, counts, or transforms.
 * The calculated answer is printed after the logic produces the final value.
 */
