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
    // Question 15: : Print characters that appear more than once (without map).
    char *text = "programming";
    for (int i = 0; i < strlen(text); i++) {
        int count = 0;
        for (int j = 0; j < strlen(text); j++) if (text[i] == text[j]) count++;
        if (count > 1 && text.indexOf(text[i]) == i) printf("%s\n", text[i]);
    }
    return 0;
}

/*
 * Explanation:
 * The value stored in `text` is the input that the conditions or loops work on.
 * The `for` loop starts with `int i = 0`, keeps running while `i < strlen(text)` is true, and updates using `i++`.
 * The variable `count` starts at 0 and increases only when the current item satisfies the question's condition.
 * `charAt(i)` lets the code inspect one character at a time by index.
 * The if/else checks test the important cases in order: `text[i] == text[j]`, `count > 1 && text.indexOf(text[i]) == i`.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
