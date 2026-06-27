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
    // Question 42: : Take three numbers and check if they can form a Pythagorean triplet.
    int a = 3, b = 4, c = 5;
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) printf("%s\n", "Pythagorean triplet");
    else printf("%s\n", "Not a Pythagorean triplet");
    return 0;
}

/*
 * Explanation:
 * The value stored in `a` is the input that the conditions or loops work on.
 * The condition `a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a` decides whether the current value matches the requirement.
 * Only the branch whose condition becomes true prints its message.
 */
