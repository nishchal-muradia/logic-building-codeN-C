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
    // Question 35: : Take income and age, and check if eligible for tax (age > 18 and income > 5 L).
    int age = 25;
    int income = 600000;
    if (age > 18 && income > 500000) printf("%s\n", "Eligible for tax");
    else printf("%s\n", "Not eligible for tax");
    return 0;
}

/*
 * Explanation:
 * The variables `age`, and `income` hold the values that the logic checks, counts, or transforms.
 * The condition `age > 18 && income > 500000` decides whether the current value matches the requirement.
 * Only the branch whose condition becomes true prints its message.
 */
