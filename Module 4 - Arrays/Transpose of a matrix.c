#include <stdio.h>
void main()
{
    int i,j;
    int a[2][2];
    int b[2][2];
    printf ("enter the elements of the first matrix: ");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            scanf ("%d",&a[i][j]);
        }
    }
    for (i=0;i<2;i++)  
    {  
        for (j=0;j<2;j++)  
        {  
            b[i][j] = a[j][i];
        }  
    }  
    for (i=0;i<2;i++)  
    {  
        for (j=0;j<2;j++)
        {
            printf("%d",b[i][j]);
        }
    }
}
