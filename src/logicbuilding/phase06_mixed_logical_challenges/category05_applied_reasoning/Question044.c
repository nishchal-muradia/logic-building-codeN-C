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
    // Question 44: : Simulate a simple calculator using switch-case.
    int first = 20, second = 5;
    char operator = '*';
    switch (operator) {
        case '+': printf("%d\n", (int)(first + second)); break;
        case '-': printf("%d\n", (int)(first - second)); break;
        case '*': printf("%d\n", (int)(first * second)); break;
        case '/': printf("%d\n", (int)(first / second)); break;
        default: printf("%s\n", "Invalid operator");
    }
    return 0;
}

/*
 * Explanation:
 * The variables `first`, and `operator` hold the values that the logic checks, counts, or transforms.
 * The calculated answer is printed after the logic produces the final value.
 */
