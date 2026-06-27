#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

bool isPerfect(int number) {
    if (number <= 1) return false;
    int sum = 1;
    for (int factor = 2; factor <= number / 2; factor++) {
        if (number % factor == 0) sum += factor;
    }
    return sum == number;
}

int main(void) {
    // Question 16: : Check if a number is a perfect number.
    int number = 28;
    printf("%s", (isPerfect(number) ? "Perfect number" : "Not perfect number"));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `number` is the input that the conditions or loops work on.
 * The helper calculates the required result and returns it to the print statement.
 * The calculated answer is printed after the logic produces the final value.
 */
