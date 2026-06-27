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
    // Question 37: : Take a single digit (0-9) and print its word form ("Zero" to "Nine").
    int digit = 7;
    char *words[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    if (digit >= 0 && digit <= 9) printf("%s\n", words[digit]);
    else printf("%s\n", "Invalid digit");
    return 0;
}

/*
 * Explanation:
 * The value stored in `words` is the input that the conditions or loops work on.
 * The condition `digit >= 0 && digit <= 9` decides whether the current value matches the requirement.
 * Only the branch whose condition becomes true prints its message.
 */
