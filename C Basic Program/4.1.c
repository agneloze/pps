#include <stdio.h>
void main()
{
float c,f;
printf("enter temp in centigrade: ");
scanf("%f",&c);
f=(1.8*c)+32;
printf(" temp in fahreinheit: \n%0.2f", f);
}