#include <math.h>
#include <stdio.h>
// Driver code
int main()
{
  double Number;
  Number = 49;
 
  // Computing the square root with 
  // the help of predefined C 
  // library function
  double squareRoot = sqrt(Number);
  double power = pow(49,2);
   
  printf("The Square root of %.2lf = %.2lf \n", 
          Number, squareRoot);
          printf("The power of %.2lf = %.2lf", 
          Number, power);
  return 0;
}