#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

char * toUpperRecursive(char * text, int index) {
    if (index == strlen(text)) return "";
    return toupper(text[index]) + toUpperRecursive(text, index + 1);
}

int main(void) {
    // Question 39: : Convert a string to uppercase recursively.
    printf("%g", (double)(toUpperRecursive("logic", 0)));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The values `toUpperRecursive("logic", 0)` passed to `println` set the starting point and stopping limit for the recursive logic.
 * The recursive return `toupper(text[index]) + toUpperRecursive(text, index + 1)` solves a smaller part first, then combines it with the current value.
 * The recursive call `toUpperRecursive(text, index + 1)` moves the work toward the base case by changing the argument each time.
 * The calculated answer is printed after the logic produces the final value.
 */
