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
    // Question 30: : Find the sum of all elements at odd indices.
    int numbers[] = {4, -2, 7, 0, 7, 3};
    int sum = 0;
    for (int i = 1; i < numbers.length; i += 2) sum += numbers[i];
    printf("%s", "Sum = ");
    printf("%g", (double)(sum));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `numbers` is the input that the conditions or loops work on.
 * The `for` loop starts with `int i = 1`, keeps running while `i < numbers.length` is true, and updates using `i += 2`.
 * The variable `sum` starts at 0 and collects values as the loop finds numbers that should be included.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
