/* Many countries are starting to use the metric system. 
Make a program to perform the following conversions: 
Read a temperature in Fahrenheit and print the equivalent in Celsius (C = 5(F-32)/9).
Read a rainfall amount given in inches and print the equivalent in millimeters (1 inch = 25.4 mm) */

#include <stdio.h>

int main() {
    double fahrenheit, inches, celsius, millimeters;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    printf("Enter the rainfall amount in inches: ");
    scanf("%lf", &inches);

    celsius = 5 * (fahrenheit - 32) / 9;
    millimeters = inches * 25.4;

    printf("THE VALUE IN CELSIUS = %.2lf\n", celsius);
    printf("THE RAINFALL AMOUNT IS = %.2lf\n", millimeters);

    return 0;
}
