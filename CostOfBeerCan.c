/* A can manufacturer wants to develop a program to calculate the cost of a cylindrical aluminum can, knowing that the cost of aluminum per square meter is $100.00. 
Input The program should read two values at the input: 
the radius and the height of the can. Both values correspond to values in meters. 
Each value occurs on a different line at the input. */

#include <stdio.h>
#include <math.h>

int main() {
    double radius, height, cost;
    double aluminumCostPerM2 = 100.00;

    printf("Enter the radius of the can: ");
    scanf("%lf", &radius);

    printf("Enter the height of the can: ");
    scanf("%lf", &height);

    double surfaceArea = 2 * M_PI * radius * (radius + height);

    cost = surfaceArea * aluminumCostPerM2;

    printf("THE COST VALUE IS = %.2lf\n", cost);

    return 0;
}