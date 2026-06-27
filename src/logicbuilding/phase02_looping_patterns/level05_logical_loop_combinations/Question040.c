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
    // Question 40: : Take 5 numbers as input. If the user enters 0, skip it using continue. At the end, print the sum of all non-zero numbers entered.
    int numbers[] = {10, 0, 5, 7, 0};
    int sum = 0;
    for (int __i_number = 0; __i_number < (int)(sizeof(numbers) / sizeof(numbers[0])); __i_number++) { int number = numbers[__i_number];
        if (number == 0) continue;
        sum += number;
    }
    printf("%s", "Sum = ");
    printf("%g", (double)(sum));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `numbers` is the input that the conditions or loops work on.
 * The enhanced `for` loop visits every element in the array one by one.
 * The variable `sum` starts at 0 and collects values as the loop finds numbers that should be included.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
