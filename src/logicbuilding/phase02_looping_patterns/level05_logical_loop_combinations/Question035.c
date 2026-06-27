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
    // Question 35: : Find the smallest and largest digit in a given number.
    int number = 58231;
    int value = abs(number);
    int smallest = 9, largest = 0;
    do {
        int digit = value % 10;
        if (digit < smallest) smallest = digit;
        if (digit > largest) largest = digit;
        value /= 10;
    } while (value > 0);
    printf("%s", "Smallest = ");
    printf("%g", (double)(smallest));
    printf("%s", ", Largest = ");
    printf("%g", (double)(largest));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `smallest` is the input that the conditions or loops work on.
 * The loop uses `% 10` to take the last digit and `/= 10` to remove that digit, which is the standard digit-processing pattern.
 * The if/else checks test the important cases in order: `digit < smallest`, `digit > largest`.
 * Only the branch whose condition becomes true prints its message.
 */
