#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

bool isVowel(char ch) {
    char lower = tolower(ch);
    return lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u';
}

int main(void) {
    // Question 31: : Remove all vowels from a string.
    char *text = "logic building";
    StringBuilder result = new StringBuilder();
    for (int i = 0; i < strlen(text); i++) if (!isVowel(text[i])) result.append(text[i]);
    printf("%g", (double)(result));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `text` is the input that the conditions or loops work on.
 * The helper checks characters against `a`, `e`, `i`, `o`, and `u`, so the main loop only needs to use that true/false result.
 * The `for` loop starts with `int i = 0`, keeps running while `i < strlen(text)` is true, and updates using `i++`.
 * A `StringBuilder` is used so characters or words can be added gradually while building the final string.
 * `charAt(i)` lets the code inspect one character at a time by index.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
