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
    // Question 30: : Check whether a number is a perfect square (without using the square root function).
    int number = 49;
    bool perfectSquare = false;
    for (int i = 1; i * i <= number; i++) {
        if (i * i == number) {
            perfectSquare = true;
            break;
        }
    }
    printf("%s", (perfectSquare ? "Perfect square" : "Not a perfect square"));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `perfectSquare` is the input that the conditions or loops work on.
 * The `for` loop starts with `int i = 1`, keeps running while `i * i <= number` is true, and updates using `i++`.
 * The condition `i * i == number` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
