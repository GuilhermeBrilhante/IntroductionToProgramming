/* Volume of the Hexagonal Base Pyramid */

#include <stdio.h>
#include <math.h>
 
int main(){
  double v, area_hex, h, comp;
  
  printf("Enter the height of the pyramid: ");
  scanf("%lf", &h);
  
  printf("Enter the side length of the hexagonal base: ");
  scanf("%lf", &comp);
  
  area_hex = 3 * (comp * comp) * sqrt(3) / 2;
  v = 1.0/3 * area_hex * h;
  
  printf("THE VOLUME OF THE PYRAMID IS = %.2lf CUBIC METERS\n", v);
 
  return 0;
}





