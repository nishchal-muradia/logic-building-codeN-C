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
    // Question 15: : Find GCD (HCF) of two numbers using Euclid's algorithm recursively.
    int first = 48, second = 18;
    while (second != 0) {
        int remainder = first % second;
        first = second;
        second = remainder;
    }
    printf("%s", "GCD = ");
    printf("%g", (double)(abs(first)));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `first`, and `remainder` hold the values that the logic checks, counts, or transforms.
 * The `while` or `do-while` loop keeps repeating until the changing value reaches the stopping condition.
 * The calculated answer is printed after the logic produces the final value.
 */
