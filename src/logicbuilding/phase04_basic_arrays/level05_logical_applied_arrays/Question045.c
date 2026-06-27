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
    // Question 45: : Find the difference between the largest and smallest element.
    int numbers[] = {4, -2, 7, 0, 9, 3};
    int largest = numbers[0];
    int smallest = numbers[0];

    for (int __i_number = 0; __i_number < (int)(sizeof(numbers) / sizeof(numbers[0])); __i_number++) { int number = numbers[__i_number];
        if (number > largest) {
            largest = number;
        }
        if (number < smallest) {
            smallest = number;
        }
    }

    printf("%s", "Difference = ");
    printf("%g", (double)((largest - smallest)));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `largest`, `smallest`, and `numbers` hold the values that the logic checks, counts, or transforms.
 * The enhanced `for` loop visits every element in the array one by one.
 * The if/else checks test the important cases in order: `number > largest`, `number < smallest`.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
