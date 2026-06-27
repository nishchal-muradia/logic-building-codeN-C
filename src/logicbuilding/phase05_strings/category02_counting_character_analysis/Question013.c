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
    // Question 13: : Count how many uppercase and lowercase letters a string has.
    char *text = "CodeN";
    int upper = 0, lower = 0;
    for (int i = 0; i < strlen(text); i++) {
        char ch = text[i];
        if (isupper(ch)) upper++;
        else if (islower(ch)) lower++;
    }
    printf("%s", "Uppercase = ");
    printf("%g", (double)(upper));
    printf("%s", ", Lowercase = ");
    printf("%g", (double)(lower));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `text`, `upper`, and `ch` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int i = 0`, keeps running while `i < strlen(text)` is true, and updates using `i++`.
 * `charAt(i)` lets the code inspect one character at a time by index.
 * The if/else checks test the important cases in order: `isupper(ch)`, `islower(ch)`.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
