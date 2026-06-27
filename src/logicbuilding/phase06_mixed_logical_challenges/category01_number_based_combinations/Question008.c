#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

int reverseNumber(int number) {
    int value = abs(number);
    int reversed = 0;
    do {
        reversed = reversed * 10 + value % 10;
        value /= 10;
    } while (value > 0);
    return number < 0 ? -reversed : reversed;
}

int main(void) {
    // Question 8: : Print the reverse of a number (123 -> 321).
    int number = 12345;
    printf("%s", "Reverse = ");
    printf("%g", (double)(reverseNumber(number)));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `number` is the input that the conditions or loops work on.
 * The helper builds the answer from the last digit or last character toward the first one.
 * The calculated answer is printed after the logic produces the final value.
 */
