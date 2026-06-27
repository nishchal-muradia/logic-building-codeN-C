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
    // Question 39: : Print the sum of all odd digits and even digits separately in a number.
    int n = 20;
    int sum = 0;
    for (int number = 1; number <= n; number++) if (number % 2 != 0) sum += number;
    printf("%s", "Odd sum = ");
    printf("%g", (double)(sum));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `n` is the input that the conditions or loops work on.
 * The `for` loop starts with `int number = 1`, keeps running while `number <= n` is true, and updates using `number++`.
 * The variable `sum` starts at 0 and collects values as the loop finds numbers that should be included.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
