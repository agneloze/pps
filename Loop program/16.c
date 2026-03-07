#include <stdio.h>
void main()
{
    int i,j,n;
    int num;
    
    printf("Enter the no of rows: ");
    scanf("%d", &n);
    
    for (i=0;i<n;i++)
    {
        num=1;
        
        for (j=0;j<n-i;j++)
        {
            printf("  ");
        }
        for (j=0;j<=i;j++)
        {
            printf("%d   ",num);
            num=num*(i-j)/(j+1);
        }
        printf("\n");
    }
    
}