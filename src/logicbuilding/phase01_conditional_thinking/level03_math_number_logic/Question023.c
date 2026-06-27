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
    // Question 23: : Take a 4-digit number and check if the first and last digits are equal.
    int number = 4554;
    int firstDigit = number / 1000;
    int lastDigit = number % 10;
    if (firstDigit == lastDigit) printf("%s\n", "First and last digits are equal");
    else printf("%s\n", "First and last digits are not equal");
    return 0;
}

/*
 * Explanation:
 * The variables `firstDigit`, and `lastDigit` hold the values that the logic checks, counts, or transforms.
 * The condition `firstDigit == lastDigit` decides whether the current value matches the requirement.
 * Only the branch whose condition becomes true prints its message.
 */
