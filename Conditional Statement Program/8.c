
#include <stdio.h>
void main() 
{
char a;
printf("Enter the variable: ");
scanf(" %c",&a);

if (a >='A' && a <='Z' )
{
    printf("The variable is uppercase");
}
else if (a >= 'a' && a <= 'z' )
{
    printf("The variable is lowecase");
}
else if (a >= '0' && a <= '9' )
{
    printf("The variable is a digit");
}
else
    {
    printf("The variable is a special character");
}
}