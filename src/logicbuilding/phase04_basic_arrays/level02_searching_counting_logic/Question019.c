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
    // Question 19: : Count how many numbers are divisible by 3 and 5 both.
    int numbers[] = {15, 9, 30, 22, 45, 10};
    int count = 0;

    for (int __i_number = 0; __i_number < (int)(sizeof(numbers) / sizeof(numbers[0])); __i_number++) { int number = numbers[__i_number];
        if (number % 3 == 0 && number % 5 == 0) {
            count++;
        }
    }

    printf("%s", "Divisible by both 3 and 5 = ");
    printf("%g", (double)(count));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `numbers` is the input that the conditions or loops work on.
 * The enhanced `for` loop visits every element in the array one by one.
 * The variable `count` starts at 0 and increases only when the current item satisfies the question's condition.
 * The condition `number % 3 == 0 && number % 5 == 0` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
