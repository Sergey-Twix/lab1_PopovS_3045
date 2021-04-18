#include <stdio.h>
#include <math.h>

double sin(double x)
{
  int  fact=1, i, sign=-1;
  double sum;

  printf("Calculator sin\n\n");

  x=x*3.14159/180;

  for(i=3; i<=10; i+=2)
  {
    fact = fact *i *(i-1);
    sum = x + sign *pow(x,i)/fact;
    
    sign = sign * -1;
  }
  
  printf("sum = %.4lf",sum);
  return sum;
}