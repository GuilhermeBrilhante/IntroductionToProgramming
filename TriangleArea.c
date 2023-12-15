/* an algorithm to read the lengths of the three sides of a triangle (S1, S2, and S3) and calculate the area of the triangle.*/
#include <stdio.h>
#include <math.h>

int main(){
    double S1, S2, S3, T, A;
    printf("Enter the lengths of the three sides of the triangle:");
    scanf("%lf", &S1);
    scanf("%lf", &S2);
    scanf("%lf", &S3);
    
    T = (S1 + S2 + S3) / 2;
    A = sqrt(T * (T - S1) * (T - S2) * (T - S3));
    
    printf("THE AREA OF THE TRIANGLE IS = %.2lf\n", A);
    
    return 0;
}




