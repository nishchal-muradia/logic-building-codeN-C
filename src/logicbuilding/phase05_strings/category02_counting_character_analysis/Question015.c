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
    // Question 15: : Count how many spaces are there in a sentence.
    char *text = "logic building is fun";
    int spaces = 0;
    for (int i = 0; i < strlen(text); i++) if (text[i] == ' ') spaces++;
    printf("%s", "Spaces = ");
    printf("%g", (double)(spaces));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `text`, and `spaces` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int i = 0`, keeps running while `i < strlen(text)` is true, and updates using `i++`.
 * `charAt(i)` lets the code inspect one character at a time by index.
 * The condition `text[i] == ' '` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
