#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

char * removeSpacesRecursive(char * text, int index) {
    if (index == strlen(text)) return "";
    char ch = text[index];
    return (ch == ' ' ? "" : ch) + removeSpacesRecursive(text, index + 1);
}

int main(void) {
    // Question 34: : Remove all spaces from a string recursively.
    char *text = "lo g ic";
    printf("%g", (double)(removeSpacesRecursive(text, 0)));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `text` is the input that the conditions or loops work on.
 * The recursive return `(ch == ' ' ? "" : ch) + removeSpacesRecursive(text, index + 1)` solves a smaller part first, then combines it with the current value.
 * The recursive call `removeSpacesRecursive(text, index + 1)` moves the work toward the base case by changing the argument each time.
 * The calculated answer is printed after the logic produces the final value.
 */
