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
    // Question 24: : Check whether a string is a palindrome.
    char *text = "level";
    printf("%s", (isPalindromeString(text) ? "Palindrome" : "Not palindrome"));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `text` is the input that the conditions or loops work on.
 * The helper compares the original value with its reversed form, because a palindrome reads the same both ways.
 * The calculated answer is printed after the logic produces the final value.
 */
