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
    // Question 12: : Count the number of digits, letters, and special characters in a string.
    int number = 98765;
    int value = abs(number);
    int count = 0;
    do {
        count++;
        value /= 10;
    } while (value > 0);
    printf("%s", "Digits = ");
    printf("%g", (double)(count));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `number`, `value`, and `count` hold the values that the logic checks, counts, or transforms.
 * The `while` or `do-while` loop keeps repeating until the changing value reaches the stopping condition.
 * The variable `count` starts at 0 and increases only when the current item satisfies the question's condition.
 * The calculated answer is printed after the logic produces the final value.
 */
