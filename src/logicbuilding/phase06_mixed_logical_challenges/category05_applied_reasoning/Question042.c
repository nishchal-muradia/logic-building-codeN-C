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
    // Question 42: : Take age inputs and count how many are adults, minors, seniors.
    int ages[] = {12, 18, 35, 61, 8, 75};
    int minors = 0;
    int adults = 0;
    int seniors = 0;

    for (int __i_age = 0; __i_age < (int)(sizeof(ages) / sizeof(ages[0])); __i_age++) { int age = ages[__i_age];
        if (age < 18) {
            minors++;
        } else if (age >= 60) {
            seniors++;
        } else {
            adults++;
        }
    }

    printf("%s", "Minors = ");
    printf("%g", (double)(minors));
    printf("\n");
    printf("%s", "Adults = ");
    printf("%g", (double)(adults));
    printf("\n");
    printf("%s", "Seniors = ");
    printf("%g", (double)(seniors));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `minors`, `adults`, `seniors`, and `ages` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int age : ages) { if (age < 18) { minors++`, keeps running while `} else if (age >= 60) { seniors++` is true, and updates using `} else { adults++; } } System.out.println("Minors = " + minors`.
 * The if/else checks test the important cases in order: `age < 18`, `age >= 60`.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
