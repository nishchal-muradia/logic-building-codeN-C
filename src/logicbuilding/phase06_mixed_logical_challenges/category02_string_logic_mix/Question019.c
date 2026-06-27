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
    // Question 19: : Find the word with maximum vowels in a sentence.
    char *sentence = "logic building practice";
    char *best = "";
    for (char *word : sentence.split("\\s+")) {
        if (strlen(word) > strlen(best)) best = word;
    }
    printf("%g", (double)(best));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `sentence`, and `best` hold the values that the logic checks, counts, or transforms.
 * The loop goes word by word after splitting the sentence, so each word can be checked separately.
 * `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
 * The condition `strlen(word) > strlen(best)` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
