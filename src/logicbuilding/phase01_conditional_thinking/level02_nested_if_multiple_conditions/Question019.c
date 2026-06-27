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
    // Question 19: : Take a day number (1-7) and print the corresponding day name.
    int day = 3;
    switch (day) {
        case 1: printf("%s\n", "Monday"); break;
        case 2: printf("%s\n", "Tuesday"); break;
        case 3: printf("%s\n", "Wednesday"); break;
        case 4: printf("%s\n", "Thursday"); break;
        case 5: printf("%s\n", "Friday"); break;
        case 6: printf("%s\n", "Saturday"); break;
        case 7: printf("%s\n", "Sunday"); break;
        default: printf("%s\n", "Invalid day");
    }
    return 0;
}

/*
 * Explanation:
 * The value stored in `day` is the input that the conditions or loops work on.
 * The calculated answer is printed after the logic produces the final value.
 */
