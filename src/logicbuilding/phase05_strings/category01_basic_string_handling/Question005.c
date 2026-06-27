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
    // Question 5: : Count how many characters (excluding spaces) are in the string.
    char *text = "logic building";
    int count = 0;
    for (int i = 0; i < strlen(text); i++) if (text[i] != ' ') count++;
    printf("%s", "Characters = ");
    printf("%g", (double)(count));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `text` is the input that the conditions or loops work on.
 * The `for` loop starts with `int i = 0`, keeps running while `i < strlen(text)` is true, and updates using `i++`.
 * The variable `count` starts at 0 and increases only when the current item satisfies the question's condition.
 * `charAt(i)` lets the code inspect one character at a time by index.
 * The condition `text[i] != ' '` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
