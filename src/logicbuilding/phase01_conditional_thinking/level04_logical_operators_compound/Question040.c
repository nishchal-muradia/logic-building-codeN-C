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
    // Question 40: : Take a password string and check basic rules (length >= 8 and contains at least one digit).
    char *password = "Code123!";
    bool hasDigit = false, hasUpper = false, hasLower = false, hasSpecial = false;
    for (int i = 0; i < strlen(password); i++) {
        char ch = password[i];
        if (isdigit(ch)) hasDigit = true;
        else if (isupper(ch)) hasUpper = true;
        else if (islower(ch)) hasLower = true;
        else hasSpecial = true;
    }
    if (strlen(password) >= 8 && hasDigit && hasUpper && hasLower && hasSpecial) printf("%s\n", "Valid password");
    else printf("%s\n", "Invalid password");
    return 0;
}

/*
 * Explanation:
 * The variables `password`, `hasDigit`, and `ch` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int i = 0`, keeps running while `i < strlen(password)` is true, and updates using `i++`.
 * `charAt(i)` lets the code inspect one character at a time by index.
 * The if/else checks test the important cases in order: `isdigit(ch)`, `isupper(ch)`, `islower(ch)`.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
