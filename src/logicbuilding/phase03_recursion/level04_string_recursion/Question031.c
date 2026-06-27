#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

char * reverseRecursive(char * text) {
    if (text.isEmpty()) return "";
    return reverseRecursive(text.substring(1)) + text[0];
}

int main(void) {
    // Question 31: : Reverse a string using recursion.
    char *text = "logic";
    printf("%g", (double)(reverseRecursive(text)));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `text` is the input that the conditions or loops work on.
 * The recursive return `reverseRecursive(text.substring(1)) + text[0]` solves a smaller part first, then combines it with the current value.
 * The calculated answer is printed after the logic produces the final value.
 */
