/* a program to read the values of the coefficients A, B, and C 
of a quadratic equation and calculate and print the value of the discriminant (Δ). */

#include <stdio.h>

int main() {
    double A, B, C, delta;

    printf("Enter the value of coefficient A: ");
    scanf("%lf", &A);

    printf("Enter the value of coefficient B: ");
    scanf("%lf", &B);

    printf("Enter the value of coefficient C: ");
    scanf("%lf", &C);

    delta = B * B - 4 * A * C;

    printf("The value of the discriminant is = %.2lf\n", delta);

    return 0;
}






