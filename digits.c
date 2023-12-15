/* Given a three-digit integer, construct another four-digit integer according to the following rule: 
the first three digits, counted from left to right, are the same as the given number. 
The fourth digit is a control digit calculated as follows: 
first digit + second digit * 3 + third digit * 5. 
The control digit is equal to the remainder of this sum divided by 7. */

#include <stdio.h>

int main() {
    int num, control_digit;
    printf("Enter a three-digit number:");
    scanf("%d", &num);

    control_digit = ((num / 100) + ((num / 10) % 10) * 3 + (num % 10) * 5) % 7;

    printf("THE NEW NUMBER IS = %d%d\n", num, control_digit);

    return 0;
}

