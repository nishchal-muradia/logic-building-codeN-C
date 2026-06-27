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
    // Question 28: : Remove the first and last character and print the remaining string.
    char *text = "logic";
    printf("%s", "First = ");
    printf("%s", text[0]);
    printf("\n");
    printf("%s", "Last = ");
    printf("%g", (double)(text[strlen(text] - 1)));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `text` is the input that the conditions or loops work on.
 * `charAt(i)` lets the code inspect one character at a time by index.
 * The calculated answer is printed after the logic produces the final value.
 */
