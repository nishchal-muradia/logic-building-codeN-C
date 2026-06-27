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
    // Question 27: : Check if an amount can be evenly divided into 2000, 500, and 100 currency notes.
    int amount = 7600;
    int notes2000 = amount / 2000;
    amount %= 2000;
    int notes500 = amount / 500;
    amount %= 500;
    int notes100 = amount / 100;
    amount %= 100;
    if (amount == 0) { printf("%s", "2000: "); printf("%d\n", (int)(notes2000)); printf("%s", ", 500: "); printf("%d", (int)(notes500)); printf("%s", ", 100: "); printf("%d", (int)(notes100)); }
    else printf("%s\n", "Amount cannot be fully divided into these notes");
    return 0;
}

/*
 * Explanation:
 * The variables `amount`, `notes2000`, `notes500`, and `notes100` hold the values that the logic checks, counts, or transforms.
 * The condition `amount == 0` decides whether the current value matches the requirement.
 * Only the branch whose condition becomes true prints its message.
 */
