#include "sin.h"

int main()
{
  double x=30;
  double res = (sin(x));
  double reference = 0.5;
  double precision = 0.001;
  double difference = reference - res;
  
  if (difference < 0)
    difference *= -1;
  if (difference > precision)
    return 1;

   x=48;
   res = (sin(x));
   reference = 0.74314;
   precision = 0.001;
   difference = reference - res;
  
  if (difference < 0)
    difference *= -1;
  if (difference > precision)
    return 2;

   x=400;
   res = (sin(x));
   reference = 0.64278;
   precision = 0.001;
   difference = reference - res;
  
  if (difference < 0)
    difference *= -1; 
  if (difference > precision)
    return 3; 

  x=0.6;
  res = (sin(x));
  reference = 0.01047;
  precision = 0.001;
  difference = reference - res;
  
  if (difference < 0)
    difference *= -1;
  if (difference > precision)
    return 4;

  x= -45;
  res = (sin(x));
  reference = -0.7071;
  precision = 0.001;
  difference = reference - res;
  
  if (difference < 0)
    difference *= -1;
  if (difference > precision)
    return 5;

  x=63;
  res = (sin(x));
  reference = 0.891;
  precision = 0.001;
  difference = reference - res;
  
  if (difference < 0)
    difference *= -1;
  if (difference > precision)
    return 6;

  return 0;  

}
