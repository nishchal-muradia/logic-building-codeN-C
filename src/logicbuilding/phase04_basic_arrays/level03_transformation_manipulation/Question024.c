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
    // Question 24: : Replace all even numbers with 1 and all odd with 0.
    int numbers[] = {4, -2, 7, -8, 0, 3};

    for (int i = 0; i < numbers.length; i++) {
        if (numbers[i] % 2 == 0) {
            numbers[i] = 1;
        } else {
            numbers[i] = 0;
        }
    }

    for (int __i_number = 0; __i_number < (int)(sizeof(numbers) / sizeof(numbers[0])); __i_number++) { int number = numbers[__i_number];
        printf("%g", (double)(number));
        printf("%s", " ");
    }
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `numbers` is the input that the conditions or loops work on.
 * The enhanced `for` loop visits every element in the array one by one.
 * The condition `numbers[i] % 2 == 0` decides whether the current value matches the requirement.
 * `System.out.println()` is used only to move to the next line after the pattern output is complete.
 */
