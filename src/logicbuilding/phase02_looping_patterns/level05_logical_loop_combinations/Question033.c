#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

int reverseNumber(int number) {
    int value = abs(number);
    int reversed = 0;
    do {
        reversed = reversed * 10 + value % 10;
        value /= 10;
    } while (value > 0);
    return number < 0 ? -reversed : reversed;
}

bool isPalindromeNumber(int number) {
    return abs(number) == abs(reverseNumber(number));
}

int main(void) {
    // Question 33: : Print all numbers that are palindromes between 1-500.
    for (int number = 1; number <= 500; number++) if (isPalindromeNumber(number)) printf("%d\n", (int)(number));
    return 0;
}

/*
 * Explanation:
 * The value stored in `number` is the input that the conditions or loops work on.
 * The helper compares the original value with its reversed form, because a palindrome reads the same both ways.
 * The `for` loop starts with `int number = 1`, keeps running while `number <= 500` is true, and updates using `number++`.
 * The condition `isPalindromeNumber(number)` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
