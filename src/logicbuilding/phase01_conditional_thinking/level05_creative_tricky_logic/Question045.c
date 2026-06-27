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
    // Question 45: : Take three numbers and check if they are in arithmetic progression.
    int a = 4, b = 8, c = 12;
    if (b - a == c - b) printf("%s\n", "Arithmetic progression");
    else printf("%s\n", "Not an arithmetic progression");
    return 0;
}

/*
 * Explanation:
 * The value stored in `a` is the input that the conditions or loops work on.
 * The condition `b - a == c - b` decides whether the current value matches the requirement.
 * Only the branch whose condition becomes true prints its message.
 */
