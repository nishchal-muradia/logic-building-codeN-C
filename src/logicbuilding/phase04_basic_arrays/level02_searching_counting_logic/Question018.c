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
    // Question 18: : Find the count of prime numbers in the array.
    int numbers[] = {4, -2, 7, 0, 7, 3};
    int count = 0;
    for (int __i_number = 0; __i_number < (int)(sizeof(numbers) / sizeof(numbers[0])); __i_number++) if (isPrime(number)) count++;
    printf("%s", "Prime count = ");
    printf("%g", (double)(count));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `numbers` is the input that the conditions or loops work on.
 * The helper tries possible divisors from 2 up to the square root of the number.
 * If any divisor divides the number exactly, the number is not prime; otherwise it is prime.
 * The enhanced `for` loop visits every element in the array one by one.
 * The variable `count` starts at 0 and increases only when the current item satisfies the question's condition.
 * The condition `isPrime(number)` decides whether the current value matches the requirement.
 */
