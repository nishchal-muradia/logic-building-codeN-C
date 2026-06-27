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
    // Question 16: : Count words that start and end with the same letter.
    char *sentence = "area code civic";
    for (char *word : sentence.split("\\s+")) {
        if (word[0] == word[strlen(word] - 1)) printf("%d\n", (int)(word));
    }
    return 0;
}

/*
 * Explanation:
 * The value stored in `sentence` is the input that the conditions or loops work on.
 * The loop goes word by word after splitting the sentence, so each word can be checked separately.
 * `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
 * The condition `word[0] == word[strlen(word] - 1)` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
