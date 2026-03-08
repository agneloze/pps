#include <stdio.h>
void main()
{
    int n,i,sum=0;
    float avg;
    printf("Enter the total nos u want: ");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        printf("Enter number %d: ",i+1);
       scanf("%d",&a[i]);
       sum=sum+ a[i];
    }
    avg=sum/n;
    printf("The sum is %d", sum);
     printf("\nThe avg is %.2f", avg);
}