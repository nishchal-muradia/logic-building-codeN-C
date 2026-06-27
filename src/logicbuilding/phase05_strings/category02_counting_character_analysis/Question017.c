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
    // Question 17: : Count how many alphabets are before 'm' and after 'm' in a given string.
    char *text = "alphabet";
    int before = 0, after = 0;
    for (int i = 0; i < strlen(text); i++) {
        char ch = tolower(text[i]);
        if (ch >= 'a' && ch < 'm') before++;
        else if (ch > 'm' && ch <= 'z') after++;
    }
    printf("%s", "Before m = ");
    printf("%g", (double)(before));
    printf("%s", ", After m = ");
    printf("%g", (double)(after));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `text`, `before`, and `ch` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int i = 0`, keeps running while `i < strlen(text)` is true, and updates using `i++`.
 * `charAt(i)` lets the code inspect one character at a time by index.
 * The if/else checks test the important cases in order: `ch >= 'a' && ch < 'm'`, `ch > 'm' && ch <= 'z'`.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
