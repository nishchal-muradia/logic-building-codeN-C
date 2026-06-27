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
    // Question 21: : Take a 3-digit number and check if all digits are distinct.
    int number = 427;
    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int ones = number % 10;
    if (hundreds != tens && tens != ones && hundreds != ones) printf("%s\n", "All digits are distinct");
    else printf("%s\n", "Digits are not distinct");
    return 0;
}

/*
 * Explanation:
 * The variables `hundreds`, `tens`, and `ones` hold the values that the logic checks, counts, or transforms.
 * The condition `hundreds != tens && tens != ones && hundreds != ones` decides whether the current value matches the requirement.
 * Only the branch whose condition becomes true prints its message.
 */
