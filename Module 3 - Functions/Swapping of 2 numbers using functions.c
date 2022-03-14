#include<stdio.h>  
  
void swap(int, int);  
  
int main()  
{  
    int a, b;  
  
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    swap(a, b);
    x=&a;
    y=&b;
    return 0;
}  
void swap(int a, int b)  
{  
    
    int z;  
  
    z = a;  
    a = b;  
    b = z;  
  
    printf("a = %d and b = %d\n", a, b);
    
}  
