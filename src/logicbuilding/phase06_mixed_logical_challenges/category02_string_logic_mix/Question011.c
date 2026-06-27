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
    // Question 11: : Check if two strings are anagrams (without using collections).
    char *first = "listen";
    char *second = "silent";
    int frequency[] = new int[256];
    for (int i = 0; i < strlen(first); i++) frequency[first[i]]++;
    for (int i = 0; i < strlen(second); i++) frequency[second[i]]--;
    bool anagram = strlen(first) == strlen(second);
    for (int __i_value = 0; __i_value < (int)(sizeof(frequency) / sizeof(frequency[0])); __i_value++) if (value != 0) anagram = false;
    printf("%s", (anagram ? "Anagram" : "Not anagram"));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `first`, `second`, and `anagram` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int i = 0`, keeps running while `i < strlen(first)` is true, and updates using `i++`.
 * `charAt(i)` lets the code inspect one character at a time by index.
 * The condition `value != 0` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
