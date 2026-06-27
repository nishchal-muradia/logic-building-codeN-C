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
    // Question 34: : Replace all spaces with '_'.
    char *text = "java logic building";
    StringBuilder result = new StringBuilder();

    for (int i = 0; i < strlen(text); i++) {
        char ch = text[i];
        if (ch == ' ') {
            result.append('_');
        } else {
            result.append(ch);
        }
    }

    printf("%g", (double)(result));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `text`, and `ch` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int i = 0`, keeps running while `i < strlen(text)` is true, and updates using `i++`.
 * A `StringBuilder` is used so characters or words can be added gradually while building the final string.
 * `charAt(i)` lets the code inspect one character at a time by index.
 * The condition `ch == ' '` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
