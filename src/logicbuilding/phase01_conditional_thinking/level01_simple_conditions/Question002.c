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
    // Question 2: : Check if a number is even or odd.
    int number = 18;
    if (number % 2 == 0) printf("%s\n", "Even");
    else printf("%s\n", "Odd");
    return 0;
}

/*
 * Explanation:
 * The value stored in `number` is the input that the conditions or loops work on.
 * The condition `number % 2 == 0` decides whether the current value matches the requirement.
 * Only the branch whose condition becomes true prints its message.
 */
