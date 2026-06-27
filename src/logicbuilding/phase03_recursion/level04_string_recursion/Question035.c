#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

char * replaceCharRecursive(char * text, int index, char oldChar, char newChar) {
    if (index == strlen(text)) return "";
    char ch = text[index] == oldChar ? newChar : text[index];
    return ch + replaceCharRecursive(text, index + 1, oldChar, newChar);
}

int main(void) {
    // Question 35: : Replace all occurrences of a character (say 'a' -> 'x') recursively.
    char *text = "banana";
    printf("%g", (double)(replaceCharRecursive(text, 0, 'a', 'x')));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `text` is the input that the conditions or loops work on.
 * The recursive return `ch + replaceCharRecursive(text, index + 1, oldChar, newChar)` solves a smaller part first, then combines it with the current value.
 * The recursive call `replaceCharRecursive(text, index + 1, oldChar, newChar)` moves the work toward the base case by changing the argument each time.
 * The calculated answer is printed after the logic produces the final value.
 */
