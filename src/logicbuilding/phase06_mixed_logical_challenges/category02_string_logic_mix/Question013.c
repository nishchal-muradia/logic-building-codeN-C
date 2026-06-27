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
    // Question 13: : Reverse words in a string if their length is even.
    char *sentence = "code logic java";
    for (char *word : sentence.split("\\s+")) {
        if (strlen(word) % 2 == 0) { printf("%d", (int)(reverseString(word))); printf("%s", " "); }
        else printf("%d", (int)(word)); printf("%s", " ");
    }
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `sentence` is the input that the conditions or loops work on.
 * The helper builds the answer from the last digit or last character toward the first one.
 * The loop goes word by word after splitting the sentence, so each word can be checked separately.
 * `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
 * The condition `strlen(word) % 2 == 0` decides whether the current value matches the requirement.
 * `System.out.println()` is used only to move to the next line after the pattern output is complete.
 */
