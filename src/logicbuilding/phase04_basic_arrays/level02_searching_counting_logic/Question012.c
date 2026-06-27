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
    // Question 12: : Count how many times a given element appears.
    int numbers[] = {4, 7, 2, 7, 9, 7};
    int target = 7;
    int count = 0;

    for (int __i_number = 0; __i_number < (int)(sizeof(numbers) / sizeof(numbers[0])); __i_number++) { int number = numbers[__i_number];
        if (number == target) {
            count++;
        }
    }

    printf("%s", "Frequency = ");
    printf("%g", (double)(count));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * We keep the array in `numbers`, choose the value to search for in `target`, and start `count` from 0.
 * The enhanced `for` loop checks every array element one by one.
 * Whenever `number == target` is true, the code increases `count`.
 * After the loop finishes, `count` contains the total frequency of the target element.
 */
