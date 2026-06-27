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
    // Question 17: : Toggle case for every alternate word in a sentence.
    String[] words = "logic building is fun".split("\\s+");
    for (int i = 0; i < words.length; i++) {
        if (i % 2 == 0) { printf("%d", (int)(words[i].toUpperCase())); printf("%s", " "); }
        else printf("%d", (int)(words[i].toLowerCase())); printf("%s", " ");
    }
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `words` is the input that the conditions or loops work on.
 * The `for` loop starts with `int i = 0`, keeps running while `i < words.length` is true, and updates using `i++`.
 * `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
 * The condition `i % 2 == 0` decides whether the current value matches the requirement.
 * `System.out.println()` is used only to move to the next line after the pattern output is complete.
 */
