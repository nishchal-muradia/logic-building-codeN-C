#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

bool isPrime(int number) {
    if (number <= 1) return false;
    for (int divisor = 2; divisor * divisor <= number; divisor++) {
        if (number % divisor == 0) return false;
    }
    return true;
}

int main(void) {
    // Question 17: : Print all prime numbers between 1 and 100.
    int n = 100;
    for (int number = 2; number <= n; number++) {
        if (isPrime(number)) printf("%d\n", (int)(number));
    }
    return 0;
}

/*
 * Explanation:
 * The value stored in `n` is the input that the conditions or loops work on.
 * The helper tries possible divisors from 2 up to the square root of the number.
 * If any divisor divides the number exactly, the number is not prime; otherwise it is prime.
 * The `for` loop starts with `int number = 2`, keeps running while `number <= n` is true, and updates using `number++`.
 * The condition `isPrime(number)` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
