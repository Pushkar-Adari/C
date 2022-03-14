#include<stdio.h>
void main()
{
    int a1,a2,a3;
    
    printf ("Enter the first angle: ");
    scanf ("%d",&a1);
    printf ("Enter the second angle: ");
    scanf ("%d",&a2);
    
    a3 = 180 - (a1 + a2);
    
    printf ("The third angle is %d.",a3);
}
