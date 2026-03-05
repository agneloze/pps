#include <stdio.h>
void main()
{
int y,m,d;
printf("enter the no of days: ");
scanf("%d",&d);
y= d/365;
printf("Years: %d\n", y);
m=(d%365)/30;
printf("Months: %d\n", m);
d=(d%365)%30;
printf("Days: %d\n", d);
}