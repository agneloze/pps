#include <stdio.h>
void main()
{
int a,b,c;
printf("enter first number: ");
scanf("%d",&a);
printf("enter second number: ");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("INTERCHANGED VALUES \n");
printf("First number is : %d\n", a);
printf("Second number is : %d\n",b);
}