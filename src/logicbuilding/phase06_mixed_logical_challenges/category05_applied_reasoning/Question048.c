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
    // Question 48: : Print characters that are common in two strings.
    char *first = "logic";
    char *second = "coding";
    for (int i = 0; i < strlen(first); i++) {
        char ch = first[i];
        if (second.indexOf(ch) >= 0 && first.indexOf(ch) == i) printf("%c\n", ch);
    }
    return 0;
}

/*
 * Explanation:
 * The variables `first`, `second`, and `ch` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int i = 0`, keeps running while `i < strlen(first)` is true, and updates using `i++`.
 * `charAt(i)` lets the code inspect one character at a time by index.
 * The condition `second.indexOf(ch) >= 0 && first.indexOf(ch) == i` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
