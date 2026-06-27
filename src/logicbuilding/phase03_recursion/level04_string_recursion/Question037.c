#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

void printCharactersRecursive(char * text, int index) {
    if (index == strlen(text)) return;
    printf("%s", text[index]);
    printf("\n");
    printCharactersRecursive(text, index + 1);
}

int main(void) {
    // Question 37: : Print all characters of a string one by one recursively.
    printCharactersRecursive("logic", 0);
    return 0;
}

/*
 * Explanation:
 * The values `"logic", 0` passed to `printCharactersRecursive` set the starting point and stopping limit for the recursive logic.
 * The recursive call `printCharactersRecursive(text, index + 1)` moves the work toward the base case by changing the argument each time.
 * One value is printed before the next recursive call, so the output is built step by step.
 */
