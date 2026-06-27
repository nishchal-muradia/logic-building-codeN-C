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
    // Question 11: : Count how many vowels and consonants are in a string.
    char *text = "logic";
    int vowels = 0, consonants = 0;
    for (int i = 0; i < strlen(text); i++) {
        char ch = text[i];
        if (isalpha(ch)) {
            if (isVowel(ch)) vowels++;
            else consonants++;
        }
    }
    printf("%s", "Vowels = ");
    printf("%g", (double)(vowels));
    printf("%s", ", Consonants = ");
    printf("%g", (double)(consonants));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `text`, `vowels`, and `ch` hold the values that the logic checks, counts, or transforms.
 * The helper checks characters against `a`, `e`, `i`, `o`, and `u`, so the main loop only needs to use that true/false result.
 * The `for` loop starts with `int i = 0`, keeps running while `i < strlen(text)` is true, and updates using `i++`.
 * `charAt(i)` lets the code inspect one character at a time by index.
 * The if/else checks test the important cases in order: `isalpha(ch)`, `isVowel(ch)`.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
