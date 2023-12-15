/* The cost to the consumer of a new car is the sum of the factory cost with the distributor’s percentage and taxes (applied to the factory cost). 
Assuming that the distributor’s percentage is x% of the factory price 
and the taxes are y% of the factory price, I wrote a program to read the factory cost of a car, the distributor’s percentage, and the tax percentage, calculate and print the final cost of the car to the consumer.*/
#include <stdio.h>

int main(){
    double factory_cost, distributor_percentage, tax_percentage, final_cost;
    printf("Enter the factory cost of the car:");
    scanf("%lf", &factory_cost);
    printf("Enter the distributor's percentage:");
    scanf("%lf", &distributor_percentage);
    printf("Enter the tax percentage:");
    scanf("%lf", &tax_percentage);
    
    final_cost = factory_cost * (1 + distributor_percentage / 100 + tax_percentage / 100);
    
    printf("THE VALUE OF THE CAR IS = %.2lf\n", final_cost);
    
    return 0;
}



