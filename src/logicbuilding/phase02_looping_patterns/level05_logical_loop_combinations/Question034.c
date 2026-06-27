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
    // Question 34: : Print numbers between 1-100 whose digits add up to a multiple of 3.
    for (int number = 1; number <= 100; number++) if (sumDigits(number) % 3 == 0) printf("%d\n", (int)(number));
    return 0;
}

/*
 * Explanation:
 * The value stored in `number` is the input that the conditions or loops work on.
 * The helper calculates the required result and returns it to the print statement.
 * The `for` loop starts with `int number = 1`, keeps running while `number <= 100` is true, and updates using `number++`.
 * The condition `sumDigits(number) % 3 == 0` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
