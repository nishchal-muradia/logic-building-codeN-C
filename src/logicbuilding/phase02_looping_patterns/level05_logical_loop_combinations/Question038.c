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
    // Question 38: : Print factorial of each number from 1 to n.
    int n = 6;
    for (int number = 1; number <= n; number++) { printf("%d\n", (int)(number)); printf("%s", "! = "); printf("%d", (int)(factorial(number))); }
    return 0;
}

/*
 * Explanation:
 * The value stored in `n` is the input that the conditions or loops work on.
 * The helper multiplies all numbers from 2 up to the given number to build the factorial step by step.
 * The `for` loop starts with `int number = 1`, keeps running while `number <= n` is true, and updates using `number++`.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
