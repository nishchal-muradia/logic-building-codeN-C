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
    // Question 9: : Check if a number is palindrome (121 -> true).
    int number = 121;
    int value = number;
    int reversed = 0;

    while (value > 0) {
        int digit = value % 10;
        reversed = reversed * 10 + digit;
        value /= 10;
    }

    printf("%s", (number == reversed ? "Palindrome" : "Not palindrome"));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `reversed` is the input that the conditions or loops work on.
 * The loop uses `% 10` to take the last digit and `/= 10` to remove that digit, which is the standard digit-processing pattern.
 * The calculated answer is printed after the logic produces the final value.
 */
