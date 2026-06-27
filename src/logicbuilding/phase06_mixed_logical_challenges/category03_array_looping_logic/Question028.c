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
    // Question 28: : Find the second largest element in an array.
    int numbers[] = {4, -2, 7, 0, 7, 3};
    int largest = INT_MIN, second = INT_MIN;
    for (int __i_number = 0; __i_number < (int)(sizeof(numbers) / sizeof(numbers[0])); __i_number++) { int number = numbers[__i_number];{
        if (number > largest) {{
            second = largest;
            largest = number;
        }} else if (number > second && number != largest) {{
            second = number;
        }}
    }}
    printf("%s", "Second largest = ");
    printf("%g", (double)(second));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `largest`, and `numbers` hold the values that the logic checks, counts, or transforms.
 * The enhanced `for` loop visits every element in the array one by one.
 * The if/else checks test the important cases in order: `number > largest`, `number > second && number != largest`.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
