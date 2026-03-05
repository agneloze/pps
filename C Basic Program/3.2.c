#include <stdio.h>
void main()
{
int a,b;
printf("enter first number: ");
scanf("%d",&a);
printf("enter second number: ");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("INTERCHANGED VALUES \n");
printf("First number is : %d\n", a);
printf("Second number is : %d\n",b);
}