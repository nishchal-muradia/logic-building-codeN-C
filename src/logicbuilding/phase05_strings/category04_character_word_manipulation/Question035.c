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
    // Question 35: : Print the string after removing all digits.
    char *text = "code123";
    StringBuilder result = new StringBuilder();
    for (int i = 0; i < strlen(text); i++) if (!isdigit(text[i])) result.append(text[i]);
    printf("%g", (double)(result));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `text` is the input that the conditions or loops work on.
 * The `for` loop starts with `int i = 0`, keeps running while `i < strlen(text)` is true, and updates using `i++`.
 * A `StringBuilder` is used so characters or words can be added gradually while building the final string.
 * `charAt(i)` lets the code inspect one character at a time by index.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
