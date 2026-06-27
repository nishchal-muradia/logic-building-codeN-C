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
    // Question 6: : Count how many even digits a number contains.
    int number = 482671;
    int value = number;
    int count = 0;

    while (value > 0) {
        int digit = value % 10;
        if (digit % 2 == 0) {
            count++;
        }
        value /= 10;
    }

    printf("%s", "Even digits = ");
    printf("%g", (double)(count));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `number`, `value`, `count`, and `digit` hold the values that the logic checks, counts, or transforms.
 * The loop uses `% 10` to take the last digit and `/= 10` to remove that digit, which is the standard digit-processing pattern.
 * The variable `count` starts at 0 and increases only when the current item satisfies the question's condition.
 * The condition `digit % 2 == 0` decides whether the current value matches the requirement.
 * Only the branch whose condition becomes true prints its message.
 */
