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

int countVowels(char *text) {
    int count = 0;
    for (int i = 0; i < strlen(text); i++) {
        if (isVowel(text[i])) count++;
    }
    return count;
}

int main(void) {
    // Question 12: : Count vowels in each word of a sentence.
    char *sentence = "logic building";
    for (char *word : sentence.split("\\s+")) printf("%d\n", (int)(word)); printf("%s", " -> "); printf("%d", (int)(countVowels(word)));
    return 0;
}

/*
 * Explanation:
 * The value stored in `sentence` is the input that the conditions or loops work on.
 * The helper checks characters against `a`, `e`, `i`, `o`, and `u`, so the main loop only needs to use that true/false result.
 * The loop goes word by word after splitting the sentence, so each word can be checked separately.
 * `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
