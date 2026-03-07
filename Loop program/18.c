#include <stdio.h>
void main()
{
    int a,max,min,i;
printf("Enter 10 digits with space: ");
scanf("%d",&a);

max=a;
min=a;

for(i=2;i<=10;i++)
{
    scanf("%d",&a);
    
    if(a>max)
    max=a;
    
    if(a<min)
    min=a;
}
  printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

}