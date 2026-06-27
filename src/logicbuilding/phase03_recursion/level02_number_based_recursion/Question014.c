#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

int productDigits(int number) {
    int value = abs(number);
    int product = 1;
    if (value == 0) return 0;
    while (value > 0) {
        product *= value % 10;
        value /= 10;
    }
    return product;
}

int main(void) {
    // Question 14: : Find product of digits of a number recursively.
    int number = 2345;
    printf("%s", "Product of digits = ");
    printf("%g", (double)(productDigits(number)));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `number` is the input that the conditions or loops work on.
 * The helper calculates the required result and returns it to the print statement.
 * The calculated answer is printed after the logic produces the final value.
 */
