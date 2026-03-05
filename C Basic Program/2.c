#include <stdio.h>
void main()
{
float i,p,r,n,s;
printf("Enter the Principal amount: ");
scanf("%f",&p);
printf("Enter the Rate of interest: ");
scanf("%f",&r);
printf("Enter the no. of years: ");
scanf("%f",&n);
i=(p*r*n)/100;
printf("The simple interst is: %.2f\n",i);
s=p+i;
printf("The total amount is: %.2f\n",s);
}
