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
    // Question 26: : Print the middle character(s) of a string.
    char *text = "coding";
    int length = strlen(text);
    if (length % 2 == 0) printf("%d\n", (int)(text.substring(length / 2 - 1, length / 2 + 1)));
    else printf("%s\n", text[length / 2]);
    return 0;
}

/*
 * Explanation:
 * The variables `text`, and `length` hold the values that the logic checks, counts, or transforms.
 * `charAt(i)` lets the code inspect one character at a time by index.
 * The condition `length % 2 == 0` decides whether the current value matches the requirement.
 * Only the branch whose condition becomes true prints its message.
 */
