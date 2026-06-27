#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

long long factorial(int number) {
    long long result = 1;
    for (int value = 2; value <= number; value++) result *= value;
    return result;
}

int main(void) {
    // Question 28: : Check if a number is a strong number (sum of factorials of digits = number).
    int number = 5;
    printf("%g", (double)(number));
    printf("%s", "! = ");
    printf("%g", (double)(factorial(number)));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `number` is the input that the conditions or loops work on.
 * The helper multiplies all numbers from 2 up to the given number to build the factorial step by step.
 * The calculated answer is printed after the logic produces the final value.
 */
