/* An algorithm that reads the mass (in tons) of an airplane, its acceleration (m/s²), and the time (s) it took from rest until takeoff. 
The program should calculate and write the speed reached (Km/h), the length of the runway (m), and the mechanical work performed (J) at the moment of takeoff. */

#include <stdio.h>

int main(){
    double mass_ton, a_ms, time_s, v, s, w;
    printf("Enter the mass of the airplane in tons:");
    scanf("%lf", &mass_ton);
    printf("Enter the acceleration of the airplane in m/s^2:");
    scanf("%lf", &a_ms);
    printf("Enter the time it took for the airplane to take off in seconds:");
    scanf("%lf", &time_s);
    
    v = (a_ms * time_s) * 3.6; 
    s = (a_ms * time_s * time_s) / 2;
    w =(mass_ton * 1000) * (v / 3.6) * (v / 3.6) / 2; 
    
    printf("SPEED = %.2lf Km/h\n", v);
    printf("RUNWAY LENGTH = %.2lf m\n", s);
    printf("WORK PERFORMED = %.2lf J\n", w);
    
    return 0;
}



