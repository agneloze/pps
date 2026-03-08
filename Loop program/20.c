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
    int freq=0,num;
    printf("Enter number to find the occurence: ");
    scanf("%d",&num);
    
    for (i=0;i<n;i++)
    {
        if (num==a[i])
        freq++;
    }

printf("\nThe number %d is found %d times.", num, freq);
}