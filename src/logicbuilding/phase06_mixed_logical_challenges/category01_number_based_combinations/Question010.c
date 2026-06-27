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
    // Question 10: : Check if a number is perfect (sum of factors equals number).
    int number = 28;
    int sum = 0;

    for (int factor = 1; factor < number; factor++) {
        if (number % factor == 0) {
            sum += factor;
        }
    }

    printf("%s", (sum == number ? "Perfect number" : "Not perfect number"));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `number`, `sum`, and `factor` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int factor = 1`, keeps running while `factor < number` is true, and updates using `factor++`.
 * The variable `sum` starts at 0 and collects values as the loop finds numbers that should be included.
 * The condition `number % factor == 0` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
