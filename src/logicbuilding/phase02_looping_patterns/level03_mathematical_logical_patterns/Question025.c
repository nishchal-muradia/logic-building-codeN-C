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
    // Question 25: : Find LCM of two numbers using loops.
    int first = 12, second = 18;
    int a = first, b = second;
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    int lcm = abs(first * second) / abs(a);
    printf("%s", "LCM = ");
    printf("%g", (double)(lcm));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `first`, `a`, `remainder`, and `lcm` hold the values that the logic checks, counts, or transforms.
 * The `while` or `do-while` loop keeps repeating until the changing value reaches the stopping condition.
 * The calculated answer is printed after the logic produces the final value.
 */
