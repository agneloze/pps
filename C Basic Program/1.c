#include <stdio.h>
void main()
{
float a,b,c;
printf("Enter first number:");
scanf("%f",&a);
printf("Enter second number:");
scanf("%f",&b);
c= a+b;
printf("The addition of the two numbers is %.2f\n",c);
c= a-b;
printf("The subtraction of the two numbers is %.2f\n",c);
c= a*b;
printf("The multiplication of the two numbers is %.2f\n",c);
c= a/b;
printf("The division of the two numbers is %.2f\n",c);
}
