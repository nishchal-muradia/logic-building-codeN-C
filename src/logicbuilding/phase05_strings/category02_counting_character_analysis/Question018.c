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
    // Question 18: : Count how many substrings start and end with the same character (simple logic).
    char *text = "abca";
    int count = 0;
    for (int start = 0; start < strlen(text); start++) {
        for (int end = start; end < strlen(text); end++) {
            if (text[start] == text[end]) count++;
        }
    }
    printf("%s", "Count = ");
    printf("%g", (double)(count));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `text`, `start`, and `end` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int start = 0`, keeps running while `start < strlen(text)` is true, and updates using `start++`.
 * The variable `count` starts at 0 and increases only when the current item satisfies the question's condition.
 * `charAt(i)` lets the code inspect one character at a time by index.
 * The condition `text[start] == text[end]` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
