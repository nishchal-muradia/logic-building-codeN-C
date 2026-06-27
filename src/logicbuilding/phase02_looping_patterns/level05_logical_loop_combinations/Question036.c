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
    // Question 36: : Print all numbers from 1-n whose binary representation has an even number of 1s.
    int n = 30;
    for (int number = 1; number <= n; number++) {
        int value = number, ones = 0;
        while (value > 0) {
            if (value % 2 == 1) ones++;
            value /= 2;
        }
        if (ones % 2 == 0) printf("%d\n", (int)(number));
    }
    return 0;
}

/*
 * Explanation:
 * The value stored in `n` is the input that the conditions or loops work on.
 * The `for` loop starts with `int number = 1`, keeps running while `number <= n` is true, and updates using `number++`.
 * The `while` or `do-while` loop keeps repeating until the changing value reaches the stopping condition.
 * The if/else checks test the important cases in order: `value % 2 == 1`, `ones % 2 == 0`.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
