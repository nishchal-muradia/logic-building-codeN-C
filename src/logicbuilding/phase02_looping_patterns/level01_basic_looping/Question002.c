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
    // Question 2: : Print all even numbers between 1 and 100.
    for (int number = 1; number <= 100; number++) {
        if (number % 2 == 0) printf("%d\n", (int)(number));
    }
    return 0;
}

/*
 * Explanation:
 * The value stored in `number` is the input that the conditions or loops work on.
 * The `for` loop starts with `int number = 1`, keeps running while `number <= 100` is true, and updates using `number++`.
 * The condition `number % 2 == 0` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
