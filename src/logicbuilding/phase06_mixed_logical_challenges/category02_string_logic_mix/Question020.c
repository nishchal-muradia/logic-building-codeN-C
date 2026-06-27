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
    // Question 20: : Remove duplicate words from a sentence.
    String[] words = "java logic java code".split("\\s+");
    StringBuilder result = new StringBuilder();
    for (int i = 0; i < words.length; i++) {
        bool seen = false;
        for (int j = 0; j < i; j++) if (words[i].equals(words[j])) seen = true;
        if (!seen) result.append(words[i]).append(" ");
    }
    printf("%g", (double)(result.toString().trim()));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `seen`, and `words` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int i = 0`, keeps running while `i < words.length` is true, and updates using `i++`.
 * A `StringBuilder` is used so characters or words can be added gradually while building the final string.
 * `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
 * The condition `words[i].equals(words[j])` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
