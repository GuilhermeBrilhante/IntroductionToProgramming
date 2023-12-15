/* Knowing that 100 kW of energy cost 70% of the minimum wage, I wrote an algorithm that reads the value of the minimum wage and the amount of kW consumed by a residence. 
Calculate and print: 
the value in dollars of each kW; 
the value in dollars to be paid for the residence’s consumption; 
the new value to be paid by the residence with a 10% discount. */

#include <stdio.h>

int main() {
    double minWage, kW, costPerkW, consumptionCost, discountedCost;

    printf("Enter the minimum wage: ");
    scanf("%lf", &minWage);

    printf("Enter the amount of kW consumed: ");
    scanf("%lf", &kW);

    costPerkW = 0.7 * minWage / 100;
    consumptionCost = costPerkW * kW;
    discountedCost = consumptionCost * 0.9;

    printf("Cost per kW: $ %.2lf\n", costPerkW);
    printf("Consumption cost: $ %.2lf\n", consumptionCost);
    printf("Cost with discount: $ %.2lf\n", discountedCost);

    return 0;
}
