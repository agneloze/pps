#include <stdio.h>
void main()
{
    int n;
    printf("Enter the no of elements in array: ");
    scanf("%d",&n);
    int a[n],i;

    for (i=0;i<n;i++)
    {
        printf("Enter number %d: ",i+1);
       scanf("%d",&a[i]);
    }
    int freq=0,num,rep;
    printf("Enter number to find: ");
    scanf("%d",&num);
     printf("Enter number to replace: ");
    scanf("%d",&rep);
        for (i=0;i<n;i++)
    {
        if (num==a[i])
        freq++;
    }

printf("\nThe number %d is found %d times.", num, freq);
    
    for (i=0;i<n;i++)
    {
        if (num==a[i])
        {
            a[i]=rep;
        }
    }

printf("\nThe updated array: ");
for (i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
}