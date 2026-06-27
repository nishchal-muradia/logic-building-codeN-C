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
    // Question 44: : Find the second smallest element in an array.
    int numbers[] = {4, -2, 7, 0, 7, 3};
    int smallest = INT_MAX, second = INT_MAX;
    for (int __i_number = 0; __i_number < (int)(sizeof(numbers) / sizeof(numbers[0])); __i_number++) { int number = numbers[__i_number];{
        if (number < smallest) {{
            second = smallest;
            smallest = number;
        }} else if (number < second && number != smallest) {{
            second = number;
        }}
    }}
    printf("%s", "Second smallest = ");
    printf("%g", (double)(second));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `smallest`, and `numbers` hold the values that the logic checks, counts, or transforms.
 * The enhanced `for` loop visits every element in the array one by one.
 * The if/else checks test the important cases in order: `number < smallest`, `number < second && number != smallest`.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
