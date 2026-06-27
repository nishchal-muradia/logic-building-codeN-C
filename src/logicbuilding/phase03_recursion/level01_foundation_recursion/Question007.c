#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

long long power(int x, int n) {
    if (n == 0) return 1;
    return x * power(x, n - 1);
}

int main(void) {
    // Question 7: : Calculate power of a number (x^n) using recursion.
    int x = 2, n = 5;
    printf("%s", "Power = ");
    printf("%g", (double)(power(x, n)));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `x` is the input that the conditions or loops work on.
 * Inside `power`, the condition `n == 0` is the base case; it stops the repeated recursive calls.
 * The recursive return `x * power(x, n - 1)` solves a smaller part first, then combines it with the current value.
 * The recursive call `power(x, n - 1)` moves the work toward the base case by changing the argument each time.
 * The calculated answer is printed after the logic produces the final value.
 */
