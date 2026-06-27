#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

char * reverseString(char * text) {
    StringBuilder builder = new StringBuilder();
    for (int i = strlen(text) - 1; i >= 0; i--) builder.append(text[i]);
    return builder.toString();
}

int main(void) {
    // Question 22: : Reverse each word in a sentence.
    char *sentence = "logic building";
    for (char *word : sentence.split("\\s+")) printf("%d", (int)(reverseString(word))); printf("%s", " ");
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `sentence` is the input that the conditions or loops work on.
 * The helper builds the answer from the last digit or last character toward the first one.
 * The loop goes word by word after splitting the sentence, so each word can be checked separately.
 * `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
 * `System.out.println()` is used only to move to the next line after the pattern output is complete.
 */
