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
    // Question 11: : Take three sides and check if they form a valid triangle.
    int a = 3, b = 4, c = 5;
    if (a + b > c && a + c > b && b + c > a) printf("%s\n", "Valid triangle");
    else printf("%s\n", "Invalid triangle");
    return 0;
}

/*
 * Explanation:
 * The value stored in `a` is the input that the conditions or loops work on.
 * The condition `a + b > c && a + c > b && b + c > a` decides whether the current value matches the requirement.
 * Only the branch whose condition becomes true prints its message.
 */
