
#include <stdio.h>
void main() 
{
int a,f,l,b;
printf("Enter the number: ");
scanf("%d", &a);
 l=a%10;
 
 f=a;
 while (f>=10)
 {
    f=f/10;
 }
 b=f+l;
 printf("The first digit is %d\n", f);
 printf("The second digit is %d\n", l);
 printf("The sum is %d\n", b);
}