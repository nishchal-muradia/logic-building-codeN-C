#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

int sumDigits(int number) {
    int value = abs(number);
    int sum = 0;
    do {
        sum += value % 10;
        value /= 10;
    } while (value > 0);
    return sum;
}

int main(void) {
    // Question 2: : Find the sum of digits of a number (use loop).
    int number = 9876;
    printf("%s", "Sum of digits = ");
    printf("%g", (double)(sumDigits(number)));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `number` is the input that the conditions or loops work on.
 * The helper calculates the required result and returns it to the print statement.
 * The calculated answer is printed after the logic produces the final value.
 */
