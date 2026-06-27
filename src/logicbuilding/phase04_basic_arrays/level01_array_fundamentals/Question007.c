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
    // Question 7: : Count how many elements are even and odd.
    int numbers[] = {4, -2, 7, 0, 7, 3};
    int even = 0, odd = 0;
    for (int __i_number = 0; __i_number < (int)(sizeof(numbers) / sizeof(numbers[0])); __i_number++) { int number = numbers[__i_number];
        if (number % 2 == 0) even++;
        else odd++;
    }
    printf("%s", "Even = ");
    printf("%g", (double)(even));
    printf("%s", ", Odd = ");
    printf("%g", (double)(odd));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `even`, and `numbers` hold the values that the logic checks, counts, or transforms.
 * The enhanced `for` loop visits every element in the array one by one.
 * The condition `number % 2 == 0` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
