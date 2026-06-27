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
    // Question 32: : Count how many numbers between 1-500 are divisible by 7 but not by 5.
    int count = 0;
    for (int number = 1; number <= 500; number++) if (number % 7 == 0 && number % 5 != 0) count++;
    printf("%s", "Count = ");
    printf("%g", (double)(count));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `count`, and `number` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int number = 1`, keeps running while `number <= 500` is true, and updates using `number++`.
 * The variable `count` starts at 0 and increases only when the current item satisfies the question's condition.
 * The condition `number % 7 == 0 && number % 5 != 0` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
