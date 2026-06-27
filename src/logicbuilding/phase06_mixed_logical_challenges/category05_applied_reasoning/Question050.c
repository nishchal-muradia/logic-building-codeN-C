#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

bool isPalindromeString(char *text) {
    char *cleaned = text.replace(" ", "").toLowerCase();
    int left = 0;
    int right = strlen(cleaned) - 1;
    while (left < right) {
        if (cleaned[left] != cleaned[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main(void) {
    // Question 50: : Print all palindromic words from a sentence.
    char *sentence = "madam and level are words";
    for (char *word : sentence.split("\\s+")) if (isPalindromeString(word)) printf("%d\n", (int)(word));
    return 0;
}

/*
 * Explanation:
 * The value stored in `sentence` is the input that the conditions or loops work on.
 * The helper calculates the required result and returns it to the print statement.
 * The loop goes word by word after splitting the sentence, so each word can be checked separately.
 * `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
 * The condition `isPalindromeString(word)` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
