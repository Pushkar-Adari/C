#include <stdio.h>
int day (int);
void main()
{
    int n;
    printf ("Enter the number of the day: ");
    scanf ("%d",&n);
    day(n);
}
int day (int n)
{
   switch (n)
   {
      case 1: printf ("Mon");
      break;
      case 2: printf ("Tue");
      break;
      case 3: printf ("Wed");
      break;
      case 4: printf ("Thu");
      break;
      case 5: printf ("Fri");
      break;
      case 6: printf ("Sat");
      break;
      case 7: printf ("Sun");
      break;
      default: printf ("Only 7 days in a week.");
   }
}

