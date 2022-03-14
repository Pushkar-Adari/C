#include <stdio.h>
void main ()
{
  int a,b,sum;
  
  printf ("Enter the first number: ");
  scanf ("%d",&a);
  printf ("Enter the second number: ");
  scanf ("%d",&b);
  
  a = a + b;
  b = a - b;
  a = a - b;
  
  printf ("\n The first number is %d and second number is %d.",a,b);
}
