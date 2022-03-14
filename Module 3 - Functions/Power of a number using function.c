#include <stdio.h>
#include <math.h>
int power (int,int,int);
void main()
{
   int a,b,n;
   printf ("Enter the number: ");
   scanf ("%d",&a);
   printf ("Enter the power of the number: ");
   scanf ("%d",&n);
   power (a,n,b);
}
int power (int a,int n,int b)
{
   b=pow (a,n);
   printf ("%d",b);
}
