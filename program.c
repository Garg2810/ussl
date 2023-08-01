#include <stdio.h>
int main() {
 int first, second, add, subtract, multiply;
 float divide;
 printf("Enter two integers:");

 scanf("%d%d", &first, &second);
 add = first + second;
 subtract = first - second;
 multiply = first * second;
 divide = first / (float)second;
printf("Sum = %dn",add);
  printf("Difference = %dn\n",subtract);
  printf("Multiplication = %dn",multiply);
  printf("Division = %.2fn",divide);
   return 0;
   }
