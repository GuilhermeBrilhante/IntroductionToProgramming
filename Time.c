/* a program that reads a time value expressed in hours, minutes, and seconds and converts this time to a value in seconds. */

#include <stdio.h>

int main() {
    int hours, minutes, seconds, totalSeconds;

    printf("Enter the value in hours: ");
    scanf("%d", &hours);

    printf("Enter the value in minutes: ");
    scanf("%d", &minutes);

    printf("Enter the value in seconds: ");
    scanf("%d", &seconds);

    totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    printf("THE TIME IN SECONDS IS = %d\n", totalSeconds);

    return 0;
}





