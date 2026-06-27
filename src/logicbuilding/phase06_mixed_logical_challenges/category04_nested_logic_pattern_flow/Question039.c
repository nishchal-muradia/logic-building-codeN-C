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
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
    // Question 39: : Generate Fibonacci series up to N using recursion.
    int terms = 8;

    for (int i = 0; i < terms; i++) {
        printf("%g", (double)(fibonacci(i)));
        printf("%s", " ");
    }
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `terms` is the input that the conditions or loops work on.
 * Inside `fibonacci`, the condition `n == 0` is the base case; it stops the repeated recursive calls.
 * The recursive return `fibonacci(n - 1) + fibonacci(n - 2)` solves a smaller part first, then combines it with the current value.
 * The recursive call `fibonacci(n - 2)` moves the work toward the base case by changing the argument each time.
 * The `for` loop starts with `int i = 0`, keeps running while `i < terms` is true, and updates using `i++`.
 * `System.out.println()` is used only to move to the next line after the pattern output is complete.
 */
