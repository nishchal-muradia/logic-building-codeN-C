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
    // Question 1: : Print all numbers between 1 and N that are divisible by both 3 and 5.
    int number = 45;
    if (number % 3 == 0 && number % 5 == 0) printf("%s\n", "Divisible by both 3 and 5");
    else printf("%s\n", "Not divisible by both 3 and 5");
    return 0;
}

/*
 * Explanation:
 * The value stored in `number` is the input that the conditions or loops work on.
 * The condition `number % 3 == 0 && number % 5 == 0` decides whether the current value matches the requirement.
 * Only the branch whose condition becomes true prints its message.
 */
