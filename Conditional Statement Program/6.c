#include <stdio.h>
void main()
{
int x;
printf("Enter the number: ");
scanf("%d",&x);
if (x<0)
{
    printf("The Number is negative.");
}
else if (x>0)
{
      printf("The Number is positive.");
}
else
{
      printf("The Number is Zero.");
}
}