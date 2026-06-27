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
    // Question 16: : Check voting eligibility for a given age (18+).
    int age = 19;
    if (age >= 18) printf("%s\n", "Eligible to vote");
    else printf("%s\n", "Not eligible to vote");
    return 0;
}

/*
 * Explanation:
 * The value stored in `age` is the input that the conditions or loops work on.
 * The condition `age >= 18` decides whether the current value matches the requirement.
 * Only the branch whose condition becomes true prints its message.
 */
