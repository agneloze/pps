
#include <stdio.h>
void main() 
{
    char o;
    float a,b,c;
    
    printf("CALCULATOR\n");
   printf("Enter your formula :");
   scanf("%f %c %f", &a,&o,&b);
   
   switch(o)
   {
       case '+' :
       c=a+b;
       printf("=%.2f\n", c);
       break;
       case '-' :
       c=a-b;
       printf("=%.2f\n", c);
       break;
       case '*' :
       c=a*b;
       printf("=%.2f\n", c);
       break;
       case '/' :
       c=a/b;
       printf("=%.2f\n", c);
       break;
       default:
            printf("Invalid operator!\n");
   }
  
}