#include <stdio.h> 
#include <math.h> 
 
int main() 
{ 
     double x, PI = M_PI;
     printf("     x      sin(x)   cos(x)\n");
     printf("   ========================\n");
     for (x = 0; x <= 2 * PI; x = x + PI / 4) {
          printf("%8.3f ", x); 
          printf("%8.3f ", sin(x)); 
          printf("%8.3f ", cos(x)); 
          printf("\n");
     }
     return 0; 
}