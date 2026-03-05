#include <stdio.h>
void main()
{
int a,b,c;
printf("Enter first number:");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);
printf("Enter third number:");
scanf("%d",&c);
if (a>=b && a>=c)
{
    printf("The largest no is %d", a);
}
else if (b>=a && b>=c)
{
    printf("The largest no is %d", b);
}
else 
{
    printf("The largest no is %d", c);
}
}