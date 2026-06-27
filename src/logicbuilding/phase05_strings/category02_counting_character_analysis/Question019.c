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

int main(void) {
    // Question 19: : Print how many words start with a vowel in a sentence.
    char *sentence = "apple code is easy";
    int count = 0;
    for (char *word : sentence.split("\\s+")) if (!word.isEmpty() && isVowel(word[0])) count++;
    printf("%s", "Count = ");
    printf("%g", (double)(count));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `sentence` is the input that the conditions or loops work on.
 * The helper checks characters against `a`, `e`, `i`, `o`, and `u`, so the main loop only needs to use that true/false result.
 * The loop goes word by word after splitting the sentence, so each word can be checked separately.
 * The variable `count` starts at 0 and increases only when the current item satisfies the question's condition.
 * `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
 * The condition `!word.isEmpty() && isVowel(word[0])` decides whether the current value matches the requirement.
 */
