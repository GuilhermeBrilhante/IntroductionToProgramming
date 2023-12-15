/* An algorithm to read a value in US dollars and calculate 
the smallest possible number of $100, $50, $10, and $1 notes that the read value can be decomposed into.
The program should write the quantity of each note will be used. */

#include <stdio.h>

int main() {
    int value, notes100, notes50, notes10, notes1;
    printf("Enter the value in US dollars: ");
    scanf("%d", &value);

    notes100 = value / 100;
    value = value % 100;

    notes50 = value / 50;
    value = value % 50;

    notes10 = value / 10;
    value = value % 10;

    notes1 = value;

    printf("NOTES OF 100 = %d\n", notes100);
    printf("NOTES OF 50 = %d\n", notes50);
    printf("NOTES OF 10 = %d\n", notes10);
    printf("COINS OF 1 = %d\n", notes1);

    return 0;
}
