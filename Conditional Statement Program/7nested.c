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
if (a>b)
{
    if (a>c)
    {
        printf("The biggest number is %d", a);
    }
    else 
    {
        printf("The biggest number is %d", c);
    }
    
}
else if (b>a)
{
    if (b>c)
    {
        printf("The biggest number is %d", b);
    }
     else 
    {
        printf("The biggest number is %d", c);
    }
}
else 
{
    printf("The biggest number is %d", c);
}
}