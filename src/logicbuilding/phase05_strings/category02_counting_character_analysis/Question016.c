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
    // Question 16: : Count how many times a given character appears in a string.
    char *text = "banana";
    char target = 'a';
    int count = 0;
    for (int i = 0; i < strlen(text); i++) if (text[i] == target) count++;
    printf("%s", "Count = ");
    printf("%g", (double)(count));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `text`, and `target` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int i = 0`, keeps running while `i < strlen(text)` is true, and updates using `i++`.
 * The variable `count` starts at 0 and increases only when the current item satisfies the question's condition.
 * `charAt(i)` lets the code inspect one character at a time by index.
 * The condition `text[i] == target` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
