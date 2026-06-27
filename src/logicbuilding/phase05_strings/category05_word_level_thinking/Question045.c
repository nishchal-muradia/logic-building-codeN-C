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
    // Question 45: : Swap first and last words in a sentence.
    String[] words = "logic building is fun".split("\\s+");
    char *temp = words[0];
    words[0] = words[words.length - 1];
    words[words.length - 1] = temp;
    for (char *word : words) { printf("%d", (int)(word)); printf("%s", " "); }
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `temp`, and `words` hold the values that the logic checks, counts, or transforms.
 * The loop goes word by word after splitting the sentence, so each word can be checked separately.
 * `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
 * `System.out.println()` is used only to move to the next line after the pattern output is complete.
 */
