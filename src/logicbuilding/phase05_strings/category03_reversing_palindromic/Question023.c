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
    // Question 23: : Reverse the order of words in a sentence.
    String[] words = "logic building is fun".split("\\s+");
    for (int i = words.length - 1; i >= 0; i--) { printf("%s", words[i]); printf("%s", " "); }
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `words` is the input that the conditions or loops work on.
 * The `for` loop starts with `int i = words.length - 1`, keeps running while `i >= 0` is true, and updates using `i--`.
 * `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
 * `System.out.println()` is used only to move to the next line after the pattern output is complete.
 */
