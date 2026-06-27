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

int countVowelsRecursive(char *text, int index) {
    if (index == strlen(text)) return 0;
    return (isVowel(text[index]) ? 1 : 0) + countVowelsRecursive(text, index + 1);
}

int main(void) {
    // Question 33: : Count vowels in a string recursively.
    char *text = "recursion";
    printf("%s", "Vowels = ");
    printf("%g", (double)(countVowelsRecursive(text, 0)));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `text` is the input that the conditions or loops work on.
 * The recursive return `(isVowel(text[index]) ? 1 : 0) + countVowelsRecursive(text, index + 1)` solves a smaller part first, then combines it with the current value.
 * The recursive call `countVowelsRecursive(text, index + 1)` moves the work toward the base case by changing the argument each time.
 * The calculated answer is printed after the logic produces the final value.
 */
