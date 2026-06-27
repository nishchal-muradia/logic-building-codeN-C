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
    // Question 41: : Given marks of students, find how many passed (>= 40).
    int marks[] = {35, 40, 76, 22, 90};
    int passed = 0;
    for (int __i_mark = 0; __i_mark < (int)(sizeof(marks) / sizeof(marks[0])); __i_mark++) if (mark >= 40) passed++;
    printf("%s", "Passed = ");
    printf("%g", (double)(passed));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `passed`, and `marks` hold the values that the logic checks, counts, or transforms.
 * The loop repeats the same check or calculation for every required value.
 * The condition `mark >= 40` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
