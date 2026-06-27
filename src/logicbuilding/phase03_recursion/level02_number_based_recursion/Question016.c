#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

void printBinary(int number) {
    if (number == 0) return;
    printBinary(number / 2);
    printf("%g", (double)(number % 2));
}

int main(void) {
    // Question 16: : Convert a number to binary recursively.
    printBinary(13);
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The values `13` passed to `printBinary` set the starting point and stopping limit for the recursive logic.
 * Inside `printBinary`, the condition `number == 0` is the base case; it stops the repeated recursive calls.
 * The recursive call `printBinary(number / 2)` moves the work toward the base case by changing the argument each time.
 * One value is printed before the next recursive call, so the output is built step by step.
 * `System.out.println()` is used only to move to the next line after the pattern output is complete.
 */
