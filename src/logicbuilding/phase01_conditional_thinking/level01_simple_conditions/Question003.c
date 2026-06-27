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
    // Question 3: : Check if a number is divisible by 5.
    int number = 25;
    if (number % 5 == 0) printf("%s\n", "Divisible by 5");
    else printf("%s\n", "Not divisible by 5");
    return 0;
}

/*
 * Explanation:
 * The value stored in `number` is the input that the conditions or loops work on.
 * The condition `number % 5 == 0` decides whether the current value matches the requirement.
 * Only the branch whose condition becomes true prints its message.
 */
