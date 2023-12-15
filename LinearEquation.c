/*Linear Equation Systems Given a system of linear equations of the type: 
ax+by = c 
dx+ey = f 
Write a program to read the values of the coefficients: a, b, c, d, e, and f
calculate the values of x and y.*/

#include <stdio.h>

int main() {
    double a, b, c, d, e, f, x, y;
    printf("Enter the values of a, b, c, d, e, f:\n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);
    scanf("%lf", &e);
    scanf("%lf", &f);

    x = (c*e - b*f) / (a*e - b*d);
    y = (a*f - c*d) / (a*e - b*d);

    printf("THE VALUE OF X IS = %.2lf\n", x);
    printf("THE VALUE OF Y IS = %.2lf\n", y);

    return 0;
}

