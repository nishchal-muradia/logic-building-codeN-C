#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

int factorial(int number) {
    if (number == 0 || number == 1) {
        return 1;
    }
    return number * factorial(number - 1);
}

int main(void) {
    // Question 5: : Find the factorial of a number using recursion.
    int number = 5;
    printf("%s", "Factorial = ");
    printf("%g", (double)(factorial(number)));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `number` is the number whose factorial has to be calculated.
 * The base case returns 1 when the number reaches 0 or 1, because factorial stops there.
 * The recursive step `number * factorial(number - 1)` multiplies the current number by the factorial of the smaller number.
 * When all recursive calls return, the final multiplied value is printed as the factorial.
 */
