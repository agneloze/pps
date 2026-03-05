#include <stdio.h>
void main()
{
float c,f;
printf("enter temp in fahrenheit: ");
scanf("%f",&f);
c=(f-32)/1.8;
printf(" temp in centrigrade: \n%0.2f", c);
}