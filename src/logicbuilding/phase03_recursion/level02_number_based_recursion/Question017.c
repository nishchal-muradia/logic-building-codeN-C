#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

void printDigitsInWords(int number) {
    char *words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (number == 0) return;
    printDigitsInWords(number / 10);
    printf("%s", words[number % 10]);
    printf("%s", " ");
}

int main(void) {
    // Question 17: : Print digits of a number in words recursively (e.g., 123 -> "one two three").
    printDigitsInWords(123);
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The values `123` passed to `printDigitsInWords` set the starting point and stopping limit for the recursive logic.
 * Inside `printDigitsInWords`, the condition `number == 0` is the base case; it stops the repeated recursive calls.
 * The recursive call `printDigitsInWords(number / 10)` moves the work toward the base case by changing the argument each time.
 * One value is printed before the next recursive call, so the output is built step by step.
 * `System.out.println()` is used only to move to the next line after the pattern output is complete.
 */
