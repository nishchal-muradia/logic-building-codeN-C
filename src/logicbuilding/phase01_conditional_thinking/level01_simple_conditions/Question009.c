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
    // Question 9: : Take a character and check if it's a vowel or consonant.
    char ch = 'e';
    if (isalpha(ch)) {
        if (isVowel(ch)) printf("%s\n", "Vowel");
        else printf("%s\n", "Consonant");
    } else {
        printf("%s", "Not an alphabet");
        printf("\n");
    }
    return 0;
}

/*
 * Explanation:
 * The value stored in `ch` is the input that the conditions or loops work on.
 * The helper checks characters against `a`, `e`, `i`, `o`, and `u`, so the main loop only needs to use that true/false result.
 * The if/else checks test the important cases in order: `isalpha(ch)`, `isVowel(ch)`.
 * Only the branch whose condition becomes true prints its message.
 */
