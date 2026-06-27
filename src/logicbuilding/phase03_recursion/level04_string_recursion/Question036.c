#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

char * removeCharRecursive(char * text, int index, char target) {
    if (index == strlen(text)) return "";
    char ch = text[index];
    return (ch == target ? "" : ch) + removeCharRecursive(text, index + 1, target);
}

int main(void) {
    // Question 36: : Remove all occurrences of a character from a string recursively.
    char *text = "banana";
    printf("%g", (double)(removeCharRecursive(text, 0, 'a')));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `text` is the input that the conditions or loops work on.
 * The recursive return `(ch == target ? "" : ch) + removeCharRecursive(text, index + 1, target)` solves a smaller part first, then combines it with the current value.
 * The recursive call `removeCharRecursive(text, index + 1, target)` moves the work toward the base case by changing the argument each time.
 * The calculated answer is printed after the logic produces the final value.
 */
