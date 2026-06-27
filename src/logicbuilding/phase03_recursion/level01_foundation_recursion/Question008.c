#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
    // Question 8: : Find nth Fibonacci number recursively.
    int n = 7;
    printf("%s", "Fibonacci = ");
    printf("%g", (double)(fibonacci(n)));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `n` is the input that the conditions or loops work on.
 * Inside `fibonacci`, the condition `n <= 1` is the base case; it stops the repeated recursive calls.
 * The recursive return `fibonacci(n - 1) + fibonacci(n - 2)` solves a smaller part first, then combines it with the current value.
 * The recursive call `fibonacci(n - 2)` moves the work toward the base case by changing the argument each time.
 * The calculated answer is printed after the logic produces the final value.
 */
