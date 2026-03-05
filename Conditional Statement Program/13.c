
#include <stdio.h>
void main() 
{
int n,a=0,b=1,next;
printf("Enter the number of dgiits of fibonacci series: ");
scanf("%d", &n);

int i;
for (i=1; i<=n; i++)
{
    printf("%d, ",a);
    next=a+b;
    a=b;
    b=next;
}

}