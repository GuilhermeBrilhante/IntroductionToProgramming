/* Write a program to read a three-digit number and print the reversed number.
This number is different from zero and is not a multiple of 10 or 100. */

#include <stdio.h>

int main() {
    int num, rev = 0, rem;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    while(num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    printf("%d\n", rev);

    return 0;
}
