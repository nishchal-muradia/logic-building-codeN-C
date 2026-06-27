#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

void printReverseRecursive(char * text, int index) {
    if (index == strlen(text)) return;
    printReverseRecursive(text, index + 1);
    printf("%s", text[index]);
}

int main(void) {
    // Question 38: : Print the string in reverse order recursively (without using loops).
    printReverseRecursive("logic", 0);
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The values `"logic", 0` passed to `printReverseRecursive` set the starting point and stopping limit for the recursive logic.
 * The recursive call `printReverseRecursive(text, index + 1)` moves the work toward the base case by changing the argument each time.
 * One value is printed before the next recursive call, so the output is built step by step.
 * `System.out.println()` is used only to move to the next line after the pattern output is complete.
 */
