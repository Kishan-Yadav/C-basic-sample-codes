/*WAP to swap two numbers uisng pointers*/
#include <stdio.h>

int main()
{
   int x, y, *a=NULL, *b=NULL, temp;

   printf("Enter the value of x and y\n");
   scanf("%d%d", &x, &y);

   printf("Before Swapping\nx = %d\ny = %d\n", x, y);

   a = &x;
   b = &y;

   temp = *b;
   *b = *a;
   *a = temp;

   printf("After Swapping\nx = %d\ny = %d\n", x, y);

   return 0;
}
