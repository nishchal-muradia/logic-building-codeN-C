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
    // Question 9: : Print the ASCII value of each character in a string.
    char *text = "abc";
    for (int i = 0; i < strlen(text); i++) printf("%s\n", text[i]); printf("%s", " = "); printf("%d", (int)((int) text[i]));
    return 0;
}

/*
 * Explanation:
 * The value stored in `text` is the input that the conditions or loops work on.
 * The `for` loop starts with `int i = 0`, keeps running while `i < strlen(text)` is true, and updates using `i++`.
 * `charAt(i)` lets the code inspect one character at a time by index.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
