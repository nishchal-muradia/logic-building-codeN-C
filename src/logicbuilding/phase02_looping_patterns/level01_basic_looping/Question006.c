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
    // Question 6: : Print the sum of first n natural numbers.
    int n = 10;
    int sum = 0;
    for (int number = 1; number <= n; number++) sum += number;
    printf("%s", "Sum = ");
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
