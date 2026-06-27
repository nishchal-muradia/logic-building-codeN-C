#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

int sumDigits(int number) {
    int value = abs(number);
    int sum = 0;
    do {
        sum += value % 10;
        value /= 10;
    } while (value > 0);
    return sum;
}

int productDigits(int number) {
    int value = abs(number);
    int product = 1;
    if (value == 0) return 0;
    while (value > 0) {
        product *= value % 10;
        value /= 10;
    }
    return product;
}

int main(void) {
    // Question 48: : Take an integer (1-9999) and check if the sum of its digits is greater than the product of its digits.
    int number = 1234;
    int sum = sumDigits(number);
    int product = productDigits(number);
    if (sum > product) printf("%s\n", "Digit sum is greater");
    else printf("%s\n", "Digit product is greater or equal");
    return 0;
}

/*
 * Explanation:
 * The variables `number`, `sum`, and `product` hold the values that the logic checks, counts, or transforms.
 * The helper calculates the required result and returns it to the print statement.
 * The condition `sum > product` decides whether the current value matches the requirement.
 * Only the branch whose condition becomes true prints its message.
 */
