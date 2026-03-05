
#include <stdio.h>
void main() 
{
int x,a,b,c;
   printf("Enter a 3 digit no: ");
   scanf("%d",&x);
   a=x/100;
   b=(x%100)/10;
   c=x%10;
//   printf("%d\n",a);
//     printf("%d\n",b);
//      printf("%d\n",c);
     if (a==c)
     {
         printf("Its a palindrome");
     }
    else
     {
         printf("Its not a palindrome");
     }
}