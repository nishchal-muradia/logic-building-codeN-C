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
    // Question 36: : Take two numbers and check if both are positive and their sum is less than 100.
    int first = 30, second = 40;
    if (first > 0 && second > 0 && first + second < 100) printf("%s\n", "Condition satisfied");
    else printf("%s\n", "Condition not satisfied");
    return 0;
}

/*
 * Explanation:
 * The value stored in `first` is the input that the conditions or loops work on.
 * The condition `first > 0 && second > 0 && first + second < 100` decides whether the current value matches the requirement.
 * Only the branch whose condition becomes true prints its message.
 */
